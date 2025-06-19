#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    nums1.erase(nums1.begin()+m, nums1.end());
    int i=0, j=0;
    while(i<m && j<n) {
        if(nums1[i]>nums2[j]) {
            nums1.insert(nums1.begin()+i, nums2[j]);
            i++;
            j++;
            m++;
        }
        else {
            i++;
        }
    }
    while(j<n) {
        nums1.emplace_back(nums2[j]);
        j++;
    }
}

int main() {
    int m;
    cin >> m;
    vector<int> nums1(m);
    for(int i = 0; i < m; i++) {
        cin >> nums1[i];
    }
    int n;
    cin >> n;
    vector<int> nums2(n);
    for(int i = 0; i < n; i++) {
        cin >> nums2[i];
    }
    merge(nums1, m, nums2, n);
    return 0;
}