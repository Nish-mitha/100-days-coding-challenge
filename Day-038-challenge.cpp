#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }
    return {}; 
}

int main() {
    int k, target;
    cin >> k;
    cin >> target;
    vector<int> nums(k);
    for(int i = 0; i < k; i++) {
        cin >> nums[i];
    }
    vector<int> arr = twoSum(nums, target);
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << endl;
    }
    return 0;
}