#include <iostream>
#include <cctype>
using namespace std;

bool isValidPalindrome(string str) {
    int left = 0, right = str.length() - 1;
    while(left < right) {
        while(!isalnum(str[left]) && left < str.length() - 1) left++;
        while(!isalnum(str[right]) && right > 0) right--;
        if(tolower(str[left]) != tolower(str[right]) && left < right) return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    string str;
    getline(cin , str);
    cout << isValidPalindrome(str) << endl;
    return 0;
}