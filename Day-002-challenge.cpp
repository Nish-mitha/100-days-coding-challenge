//  LeetCode -> https://leetcode.com/problems/divisible-and-non-divisible-sums-difference

#include <iostream>
using namespace std;

int differnceOfSums(int n, int m) {
    int num1 = 0, num2 = 0;
    for(int i = 1; i <= n; i++) {
        if(i % m == 0) {
            num2 += i;
        } else {
            num1 += i;
        }
    }
    return num1 - num2;
}

int main() {
    int n, m;
    cin >> n;
    cin >> m;
    cout << differnceOfSums(n, m) << endl;
    return 0;
}