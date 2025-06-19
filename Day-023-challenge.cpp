#include <iostream>
#include <vector>
using namespace std;

bool isPrefixString(vector<string> &str, string s) {
    string newStr = "";
    for(int i = 0; i < str.size(); i++) {
        newStr.append(str[i]);
        if(newStr == s) return true;
    } 
    return false;
}

int main() {
    int k;
    cin >> k;
    vector<string> str(k);
    for(int i = 0; i < k; i++) {
        cin >> str[i];
    }
    string s;
    cin >> s;
    cout << isPrefixString(str, s) << endl;
    return 0;
}