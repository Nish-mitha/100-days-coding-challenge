#include <iostream>
#include <vector>
using namespace std;

vector<int> findDisappearedNumbers(vector<int> &nums) {
    vector<int> arr(nums.size(), 0);
    vector<int> result;
    for(int val : nums) {
        arr[val - 1] = 1;
    }
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == 0) {
            result.push_back(i+1);
        } 
    }
    return result;
}

int main() {
    int k;
    cin >> k;
    vector<int> nums(k);
    for(int i = 0; i < k; i++) {
        cin >> nums[i];
    }
    vector<int> result = findDisappearedNumbers(nums);
    for(int val : result) {
        cout << val << endl;
    }
    return 0;
}