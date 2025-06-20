#include <iostream>
#include <vector>
using namespace std;

long long findTheArrayConcVal(vector<int> & num) {
    long long sum = 0;
    int left = 0, right = num.size() - 1;
    while(left <= right) {
        if(left == right) {
            sum += stoi(to_string(num[right]));
        } else {
            sum += stoi(to_string(num[left]).append(to_string(num[right])));
        }
        left++;
        right--;
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
    cout << findTheArrayConcVal(num) << endl;
    return 0;
}