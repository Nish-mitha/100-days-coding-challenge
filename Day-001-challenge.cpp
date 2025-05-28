#include <iostream>
using namespace std;

int main() {
    int number, a = 20, b = 30;
    int integerType;
    char charType;
    float floatType;
    double doubleType;
    char c = 'n';

    cout << "Enter A Number:";
    cin >> number;
    cout << number << endl;
    cout << a + b << endl;

    cout << "Size of int is: " << sizeof(integerType)
         << "\n";
    cout << "Size of char is: " << sizeof(charType) << "\n";
    cout << "Size of float is: " << sizeof(floatType)
         << "\n";
    cout << "Size of double is: " << sizeof(doubleType)
         << "\n";

    cout << int(c) << endl;
    return 0;
}