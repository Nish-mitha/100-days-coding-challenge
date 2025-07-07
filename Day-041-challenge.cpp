#include <iostream>
using namespace std;

int mySqrt(int x) {
    long i = 1;
    while(i * i <= x) {
        i++;
    }
    return i - 1;
}

int main() {
    int x;
    cin >> x;
    cout << mySqrt(x) << endl;
    return 0;
}