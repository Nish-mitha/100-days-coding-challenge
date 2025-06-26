#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int maxProfit(vector<int> &num) {
    int maxProfit = 0, left = 0, right = left + 1;
    while(left < num.size()) {
        int profit = 0, j = left;
        while(num[j] < num[right] && right < num.size() && j < num.size()) {
            cout << num[right] << "---" << num[left] << endl;
            profit += num[right] - num[j];
            j++;
            right = j + 1;
        cout << profit << endl;
        cout << j << endl;

        }
        cout << profit << endl;
        maxProfit = max(profit, maxProfit);
        left++;
        right = left + 1;
    }
    return maxProfit;
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