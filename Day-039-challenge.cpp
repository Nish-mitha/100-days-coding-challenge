#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> plusOne(vector<int> &digits) {
    int n = digits.size();
    
    for (int i = n - 1; i >= 0; --i) {
        if (digits[i] < 9) {
            digits[i]++;
            return digits;
        }
        digits[i] = 0;
    }
    digits.insert(digits.begin(), 1);
    return digits;
}

int main() {
    int k;
    cin >> k;
    vector<int> nums(k);
    for(int i = 0; i < k; i++) {
        cin >> nums[i];
    }
    vector<int> result = plusOne(nums);
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }
    return 0;
}