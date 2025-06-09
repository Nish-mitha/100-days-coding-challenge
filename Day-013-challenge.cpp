#include <iostream>
#include <vector>
using namespace std;

int countPartitionEvenSumDiff(vector<int> &nums) {
    int counter = 0, k = nums.size();
    for(int i = 1; i < k; i++) {
        nums[i] += nums[i - 1];
    }
    for(int i = 0; i < k - 1; i++) {
        if((nums[i] - (nums[k - 1] - nums[i])) % 2 == 0) {
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
    cout << countPartitionEvenSumDiff(nums) << endl;
    return 0;
}