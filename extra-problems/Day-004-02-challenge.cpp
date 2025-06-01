// LeetCode -> https://leetcode.com/problems/longest-common-prefix

#include <iostream>
#include <vector>
#include <string>

using namespace std;

string longestCommonPrefix(vector<string> strs) {
    string prefix = "";
    for(int i = strs[0].length(); i >= 0; i--) {
        prefix = strs[0].substr(0, i);
        for(int j = 1; j < strs.size(); j++) {
            if(strs[j].substr(0, prefix.length()) != prefix) {
                prefix = "";
                break; 
            }
        }
        if(!prefix.empty()) return prefix;
    }
    return prefix;
}

int main() {
    int numberOfEle;
    cin >> numberOfEle;
    vector<string> strs(numberOfEle);
    cout << "Enter Values" << endl;
    for(int i = 0; i < numberOfEle; i++) {
        cin >> strs[i];
    }
    cout << longestCommonPrefix(strs) << endl;
    return 0;
}