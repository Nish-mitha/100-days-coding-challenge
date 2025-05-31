// LeetCode -> https://leetcode.com/problems/reverse-words-in-a-string-iii/

#include <iostream>
#include <string>
using namespace std;

string reverseString(string str) {
    string reversedStr = "";
    for(int index = 0; index < str.length();) {
        string subStr = "";
        while(index < str.length() && str[index] != ' ') {
            subStr += str[index];
            index++;
        }
        reverse(subStr.begin(), subStr.end());
        reversedStr += index < str.length() ? subStr + " " : subStr;
        index++;
    }
    return reversedStr;
}

int main() {
    string str;
    getline(cin, str);
    cout << reverseString(str) << endl;
    return 0;
}