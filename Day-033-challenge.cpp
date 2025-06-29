#include <iostream>
#include <vector>
using namespace std;

int minimumStartVal(vector<int> &nums) {
    for(int i = 1; i < 2000; i++) {
        int sum = i + nums[0], j = 1;
        while(sum >= 1 && j < nums.size()) {
            cout << sum << "---" << sum + nums[j] << endl;
            sum = sum + nums[j];
            cout << i << endl;
            j++;
        }
        if(sum >= 1) return i;
    }
    return 0;
}

int main() {
    int k;
    cin >> k;
    vector<int> nums(k);
    for(int i = 0; i < k; i++) {
        cin >> nums[i];
    }
    cout << minimumStartVal(nums) << endl;
    return 0;
}