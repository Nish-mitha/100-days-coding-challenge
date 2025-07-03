#include <iostream>
#include <vector>
#include <set>
using namespace std;

int thirdMax(vector<int>& nums) {
    set<int> top3;

    for (int num : nums) {
        top3.insert(num);
        if (top3.size() > 3) {
            top3.erase(top3.begin()); 
        }
    }

    if (top3.size() == 3) {
        return *top3.begin();
    }
    return *top3.rbegin();
}

int main() {
    int k;
    cin >> k;
    vector<int> nums(k);
    for(int i = 0; i < k; i++) {
        cin >> nums[i];
    }
    cout << thirdMax(nums) << endl;
    return 0;
}