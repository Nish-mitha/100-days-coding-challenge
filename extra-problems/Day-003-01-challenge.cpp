// LeetCode -> https://leetcode.com/problems/reverse-string/

#include <iostream>
#include <vector>
using namespace std;

vector<string> reverseString(vector<string> &str) {
    int left = 0, right = str.size() - 1;
    while(left <=  right) {
        string tmp = str[left];
        str[left] = str[right];
        str[right] = tmp;
        left++;
        right--;
    }
    return str;
}

int main() {
    int numberOfEle;
    cin >> numberOfEle;
    vector<string> str(numberOfEle);
    for(int i = 0; i < numberOfEle; i++) {
        cin >> str[i];
    }
    vector<string> newStr = reverseString(str);
    for(int i = 0; i < newStr.size(); i++) {
        cout << newStr[i];
    }
    cout << endl;
    return 0;
}