#include <iostream>
#include <vector>
using namespace std;

vector<int> productOfArray(vector<int> arr) {
    int k = arr.size();
    vector<int> prefix(k, 1);
    vector<int> suffix(k, 1);
    for(int i = 0, j = k - 1; i < k && j >= 0; i++, j--) {
        if(i == 0 || j == k - 1) continue;
        prefix[i] = prefix[i - 1] * arr[i - 1];
        suffix[j] = suffix[j + 1] * arr[j + 1];
    }
    for(int i = 0; i < k; i++) {
        arr[i] = suffix[i] * prefix[i];
    }
    return arr;
}

int main() {
    int k;
    cin >> k;
    vector<int> arr(k);
    for(int i = 0; i < k; i++) {
        cin >> arr[i];
    }
    vector<int> res = productOfArray(arr);
    for(int i = 0; i < k; i++) {
        cout << res[i] << endl;
    }
    return 0;
}