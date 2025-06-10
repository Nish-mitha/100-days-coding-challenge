#include <iostream>
#include <vector>
using namespace std;

int numOfWaysToSplitArr(vector<int> &nums) {
    int counter = 0, len = nums.size();
    vector<long long> arr(len);
    arr[0] = nums[0];
    for(int i = 1; i < len; i++) {
        arr[i] = nums[i] + arr[i - 1];
    }
    for(int i = 0; i < len - 1; i++) {
        if(arr[i] >= arr[len - 1] - arr[i]) {
            counter++;
        }
    }
    return counter;
}

int main() {
    int k;
    cin >> k;
    vector<int> nums(k);
    for(int i = 0; i < k; i++) {
        cin >> nums[i];
    }
    cout << numOfWaysToSplitArr(nums) << endl;
    return 0;
}