#include <iostream>
#include <vector>
using namespace std;

void moveZeros(vector<int> &num) {
    int left = 0, right = left + 1;
    while(left < num.size() && right < num.size()) {
        if(num[left] == 0 && num[right] == 0) {
            right++;
        } else if(num[left] == 0) {
            num[left] = num[right];
            num[right] = 0;
            left++;
            right++;
        } else {
            left++;
            right++;
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
    moveZeros(num);
    cout << "Result :" << endl;
    for(int i = 0; i < k; i++) {
        cout << num[i] << endl; 
    }
    return 0;
}