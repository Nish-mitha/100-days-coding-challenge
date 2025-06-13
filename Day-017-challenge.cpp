#include <iostream>
#include <vector>
using namespace std;

int numberOfSubArrays(vector<int> &arr) {
    int counter = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 != 0) {
            counter++;
        }
        if(i == 0) continue;
        arr[i] += arr[i - 1];
        if(arr[i] % 2 != 0) {
            counter++;
        }
    }
    for(int i = 0; i < arr.size(); i++) {
        for(int j = i + 2; j < arr.size(); j++) {
            if((arr[j] - arr[i]) % 2 != 0) {
                counter++;
            }
        }
    }
    return counter;
}

/**  
int numOfSubarrays(vector<int>& arr) {
    const int MOD = 1e9 + 7;
    int odd = 0, even = 1; // even = 1 for the empty subarray
    int prefix = 0;
    int result = 0;

    for (int num : arr) {
        prefix = (prefix + num) % 2;
        if (prefix % 2 == 0) {
            result = (result + odd) % MOD;
            even++;
        } else {
            result = (result + even) % MOD;
            odd++;
        }
    }

    return result;
}
*/

int main() {
    int k; 
    cin >> k;
    vector<int> arr(k);
    for(int i = 0; i < k; i++) {
        cin >> arr[i];
    }
    cout << numberOfSubArrays(arr) << endl;
    return 0;
}