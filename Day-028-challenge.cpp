#include <iostream>
using namespace std;

bool isLongPressedName(string name, string typed) {
    int i = 0, j = 0;
    while (j < typed.length()) {
        if (i < name.length() && name[i] == typed[j]) {
            i++;
            j++;
        } else if (j > 0 && typed[j] == typed[j - 1]) {
            j++;
        } else {
            return false;
        }
    }
    return i == name.length();
}


int main() {
    string name, typed;
    cin >> name;
    cin >> typed;
    cout << isLongPressedName(name, typed) << endl;
    return 0;
}