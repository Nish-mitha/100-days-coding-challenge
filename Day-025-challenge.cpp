#include <iostream>
#include <vector>
#include <deque>
using namespace std;

vector<int> sortArrayByParity(vector<int> &num) {
    deque<int> resultArr;
    int left = 0, right = num.size() - 1;

    auto insertByParity = [&](int val) {
        (val % 2 == 0) ? resultArr.push_front(val) : resultArr.push_back(val);
    };

    while(left <= right) {
        insertByParity(num[left]);
        if(left != right) {
            insertByParity(num[right]);
        }
        left++;
        right--;
    }
    vector<int> result(resultArr.begin(), resultArr.end());
    return result;
}

int main() {
    int k;
    cin >> k;
    vector<int> num(k);
    for(int i = 0; i < k; i++) {
        cin >> num[i];
    }
    vector<int> resultArr = sortArrayByParity(num);
    for(int i = 0; i < k; i++) {
        cout << resultArr[i] << endl;
    }
    return 0;
}