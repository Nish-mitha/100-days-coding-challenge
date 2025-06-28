#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int maxArea(vector<int> &num) {
    int left = 0, right = num.size() - 1, maxArea = 0;
    while(left < right) {
        maxArea = max(maxArea, (right - left) * min(num[left], num[right]));
        if(num[left] < num[right]) {
            left++;
        } else {
            right--;
        }
    }
    return maxArea;
}

int main() {
    int k;
    cin >> k;
    vector<int> num(k);
    for(int i = 0; i < k; i++) {
        cin >> num[i];
    }
    cout << maxArea(num) << endl;
    return 0;
}