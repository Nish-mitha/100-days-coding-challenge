#include <iostream>
#include <vector>
using namespace std;

vector<int> flightBookings(vector<vector<int>> &arr, int labels) {
    vector<int> bookings(labels);
    for(int i = 0; i < arr.size(); i++) {
        for(int j = arr[i][0] - 1; j < arr[i][1]; j++) {
            bookings[j] += arr[i][2];
        }
    }
    return bookings;
}

int main() {
    int m, n, labels;
    cout << "Enter Value m: " << endl;
    cin >> m;
    cout << "Enter Value n: " << endl;
    cin >> n;
    cout << "Enter Label value: " << endl;
    cin >> labels;
    vector<vector<int>> arr(m, vector<int>(n, 0));
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    vector<int> result = flightBookings(arr, labels);
    for(int i = 0; i < labels; i++) {
        cout << result[i] << endl;
    }
    return 0;
}