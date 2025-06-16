#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

class HappNumber {
    public: 
        vector<int> sumArr;
        bool isHappy(int n) {
            string num = to_string(n);
            int sum = 0, left = 0, right = num.size() - 1;
            while(left <= right) {
                sum += pow((num[left] - '0'), 2);
                if(left != right) {
                    sum += pow((num[right] - '0'), 2);
                }
                left++;
                right--;
            }
            sumArr.push_back(sum);
            if(sum != 1 && count(sumArr.begin(), sumArr.end(), sum) > 1) {
                return 0;
            } else if(sum == 1) {
                return 1;
            }
            return isHappy(sum);
        }
};

int main() {
    int n;
    cin >> n;
    HappNumber happyNum; 
    cout << happyNum.isHappy(n) << endl;
    return 0;
}