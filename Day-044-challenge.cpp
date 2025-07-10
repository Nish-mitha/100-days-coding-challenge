#include <iostream>
using namespace std;

bool isPowerOfFour(int n) {
    if (n == 1)
        return true;
    if (n <= 0)
        return false; 
    double logarithmBase4 = log(n) / log(4);
    return (logarithmBase4 == (int)logarithmBase4);
}

int main() {
    int n;
    cin >> n;
    cout << isPowerOfFour(n) << endl;
    return 0;
}