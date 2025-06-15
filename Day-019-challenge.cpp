#include <iostream>
#include <vector>
using namespace std;

int removeDupeEle(vector<int> &arr) {
    int counter = 0, left = 0, right = left + 1;
    while(left < arr.size() - counter && right < arr.size() - counter) {
        if(arr[left] == arr[right]) {
            while(right < arr.size() - 1 - counter) {
                arr[right] = arr[right + 1];
                right++;
            }
            counter++;
        } else {
            left++;
        }
        right = left + 1;
    }
    return arr.size() - counter;
}

int main() {
    int k;
    cin >> k;
    vector<int> arr(k);
    for(int i = 0; i < k; i++) {
        cin >> arr[i];
    }
    cout << removeDupeEle(arr) << endl;    
    return 0;
}