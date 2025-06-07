#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int maxScore(string str) {
    int maxScore = 0;
    vector<int> nums(str.length());
    nums[0] = str[0] - '0';
    for(int i = 1; i < str.length(); i++) {
        nums[i] = nums[i - 1] + str[i] - '0';
    }
    for(int i = 0; i < nums.size() - 1; i++) {
        int zeroCounter = abs((i + 1) - nums[i]);
        int oneCounter = nums[nums.size() - 1] - nums[i];
        maxScore = max(maxScore, zeroCounter + oneCounter);
    }
    return maxScore;
}

int main() {
    string str;
    cin >> str;
    cout << maxScore(str) << endl;
    return 0;
}