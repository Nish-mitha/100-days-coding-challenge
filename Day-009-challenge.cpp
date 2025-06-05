
#include <iostream>
#include <vector>
using namespace std;

int sumOfAllOddLenSubArr(vector<int> &num) {
    int sum = 0;
    for(int i = 1; i < num.size(); i++) {
        num[i] = num[i - 1] + num[i];
    }

    for(int i = 0; i < num.size(); i++) {
        int k = i + 1;
        if(i % 2 == 0 ) {
            sum += num[i];
        } 
        while(k < num.size()) {
            sum += num[k] - num[i];
            k +=2;
        }
    }

    return sum;
}

int main() {
    int k;
    cin >> k;
    vector<int> num(k);
    for(int i = 0; i < k; i++) {
        cin >> num[i];
    }
    cout << "Sum: " << sumOfAllOddLenSubArr(num) << endl;
    return 0;
}