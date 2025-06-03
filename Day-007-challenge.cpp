// LeetCode -> https://leetcode.com/problems/count-good-triplets/description/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int countGoodTriplets(vector<int> &arr, int a, int b, int c) {
    int count = 0;
    for(int i = 0; i < arr.size(); i++) {
        for(int j = i + 1; j < arr.size(); j++) {
            for(int k = j + 1; k < arr.size(); k++) {
                if(abs(arr[i] - arr[j]) <= a && abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c) {
                    count++;
                }
            }
        }
    }
    return count;
}

int main() {
    int numOfEle, a, b, c;
    cin >> numOfEle;
    vector<int> arr(numOfEle);
    for(int i = 0; i < numOfEle; i++) {
        cin >> arr[i];
    }
    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    cout << "Enter c:";
    cin >> c;
    cout << countGoodTriplets(arr, a, b, c) << endl;
    return 0;
}
