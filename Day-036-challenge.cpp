#include <iostream>
#include <map>
using namespace std;

bool isIsomorphic(string s, string t) {
    map<char, char> sToT;
    map<char, char> tToS;

    for (int i = 0; i < s.length(); ++i) {
        char sc = s[i], tc = t[i];

        if (sToT.count(sc)) {
            if (sToT[sc] != tc) return false;
        } else {
            sToT[sc] = tc;
        }
        if (tToS.count(tc)) {
            if (tToS[tc] != sc) return false;
        } else {
            tToS[tc] = sc;
        }
    }
    return true;
}

int main() {
    string s, t;
    cin >> s;
    cin >> t;
    cout << isIsomorphic(s, t) << endl;
    return 0;
}