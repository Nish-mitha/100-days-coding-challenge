#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> intersect(vector<int> &num1, vector<int> &num2) {
    map<int, int> mapping;
    vector<int> result;
    for (int val : num1) {
        mapping[val]++;
    }
    for (int val : num2) {
        if (mapping[val] > 0) {
            result.push_back(val);
            mapping[val]--;
        }
    }
    return result;
}

int main() {
    int k, j;
    cin >> k;
    vector<int> num1(k);
    for(int i = 0; i < k; i++) {
        cin >> num1[i];
    }
    cin >> j;
    vector<int> num2(j);
    for(int i = 0; i < j; i++) {
        cin >> num2[i];
    }
    vector<int> result = intersect(num1, num2);
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }
    return 0;
}