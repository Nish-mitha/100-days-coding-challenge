// LeetCode -> https://leetcode.com/problems/length-of-last-word

#include <iostream>
using namespace std;

int findLengthOfLastWord(string str) {
    int counter = 0;
    bool foundChar = false;
    for(int i = str.length() - 1; i >= 0; i--) {
        if(str[i] == ' ' && foundChar) {
            return counter;
        } else if(str[i] != ' ') {
            foundChar = true;
            counter++;
        }
    }
    return counter;
}

int main() {
    string str;
    getline(cin, str);
    cout << findLengthOfLastWord(str) << endl;
    return 0;
}