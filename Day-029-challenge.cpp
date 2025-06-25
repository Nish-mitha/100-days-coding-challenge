#include <iostream>
#include <vector>
using namespace std;

void duplicateZeros(vector<int>& num) {
    int n = num.size(), zeros = 0;

    for (int i = 0; i + zeros < n; ++i) {
        if (num[i] == 0) {
            if (i + zeros == n - 1) {
                num[n - 1] = 0;
                n--;
                break;
            }
            zeros++;
        }
    }

    for (int i = n - 1 - zeros; i >= 0; --i) {
        if (num[i] == 0) {
            num[i + zeros] = 0;
            num[i + --zeros] = 0;
        } else {
            num[i + zeros] = num[i];
        }
    }
}


int main() {
    int k;
    cin >> k;
    vector<int> num(k);
    for(int i = 0; i < k; i++) {
        cin >> num[i];
    }
    duplicateZeros(num);
    for(int i = 0; i < k; i++) {
        cout << num[i] << endl;
    }
    return 0;
}