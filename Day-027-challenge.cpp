#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<int> &nums, int k) {
    k = k % nums.size();
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}


int main() {
    int i, k;
    cin >> i;
    vector<int> nums(i);
    for(int j = 0; j < i; j++) {
        cin >> nums[i];
    }
    cin >> k;
    rotate(nums, k);
    for(int j = 0; j < i; j++) {
        cout << nums[i] << endl;
    }
    return 0;
}