
#include <iostream>
#include <string>
using namespace std;

int addDigits(int digit) {
    int sum = 0;
    string digitStr = to_string(digit);
    for(int i = 0; i < digitStr.length(); i++) {
        sum += int(digitStr[i]);
    }
    return sum;
}

int main() {
    int digits;
    cin >> digits;
    cout << addDigits(digits) << endl;
    return 0;
}