// LeetCode -> https://leetcode.com/problems/find-the-k-beauty-of-a-number

#include <iostream>
#include <string>
using namespace std;

int divisorSubstrings(int num, int k) {
    int counter = 0;
    string strNum = to_string(num);
    for(int i = 0; i < strNum.length() && i + k <= strNum.length(); i++) {
        if(stoi(strNum.substr(i, k)) != 0 && num % stoi(strNum.substr(i, k)) == 0) {
            counter++;
        }
    }
    return counter;
}

int main() {
    int num, k;
    cin >> num;
    cin >> k;
    cout << divisorSubstrings(num, k) << endl;
    return 0;
}