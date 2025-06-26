#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int maxProfit(vector<int> &num) {
    int max = 0;
    int start = num[0];
    int len = num.size();
    for(int i = 1;i < len; i++){
        if(start < num[i]){
            max += num[i] - start;
        }
        start = num[i];
    }
    return max;
}

int main() {
    int k;
    cin >> k;
    vector<int> num(k);
    for(int i = 0; i < k; i++) {
        cin >> num[i];
    }
    cout << maxProfit(num) << endl;
    return 0;
}