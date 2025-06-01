// LeetCode -> https://leetcode.com/problems/shuffle-string/description

#include <iostream>
#include <vector>
using namespace std;

string shuffleString(string str, vector<int> &indices) {
    string shuffedStr = str;
    for(int i = 0; i < indices.size(); i++) {
        int index = indices[i];
        shuffedStr[index] = str[i];
    }
    return shuffedStr;
}

int main() {
    string str;
    cin >> str;
    vector<int> indices(str.length());
    for(int i = 0; i < indices.size(); i++) {
        cin >> indices[i];
    }
    cout << shuffleString(str, indices) << endl;
    return 0;
}