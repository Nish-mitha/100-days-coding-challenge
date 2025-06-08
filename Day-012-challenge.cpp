#include <iostream>
#include <vector>
using namespace std;

int largestAltitude(vector<int>& gain) {
    gain.insert(gain.begin(),1, 0);
    int maxAltitude = 0;
    for(int i = 1; i < gain.size(); i++) {
        gain[i] += gain[i - 1];
        maxAltitude = max(maxAltitude, gain[i]);
    }
    return maxAltitude;
}

int main() {
    int k;
    cin >> k;
    vector<int> gain(k);
    for(int i = 0; i < k; i++) {
        cin >> gain[i];
    }
    cout << largestAltitude(gain) << endl;
    return 0;
}