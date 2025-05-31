#include <iostream>
#include <string>
using namespace std;

string reverseString(string str, int k) {
    string reversedStr = "";
    int i = 0;
    while(i < str.length()) {
        string revSubStr = str.substr(i, k);
        reverse(revSubStr.begin(), revSubStr.end());
        reversedStr += revSubStr;
        if(i + k <= str.length()) {
            string subStr = str.substr(i + k, k);
            reversedStr += subStr;
        }
        i += 2 * k;
    }
    return reversedStr;
}

int main() {
    string str;
    int k;
    getline(cin, str);
    cout << "Read k" << endl;
    cin >> k;
    cout << reverseString(str, k) << endl;
    return 0;
}