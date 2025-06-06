#include <iostream>
#include <vector>
using namespace std;

int findPivotIndex(vector<int> &num) {
    for(int i = 1; i < num.size(); i++) {
        num[i] += num[i - 1];
    }
    if(num[num.size() - 1] - num[0] == 0) {
        return 0;
    } else {
        for(int i = 1; i < num.size(); i++) {
            if(num[i - 1] == num[num.size() - 1] - num[i]) {
                return i;
            }
        }
    }
    return -1;
}

int main() {
    int k;
    cin >> k;
    vector<int> num(k);
    for(int i = 0; i < k; i++) {
        cin >> num[i];
    }
    cout << findPivotIndex(num) << endl;
    return 0;
}