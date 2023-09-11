#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int c = 0; c < t; ++c) {
        int n;
        cin >> n;
        vector<int> arr(n);
        cin >> arr[0];
        int value = arr[0];
        for (int i = 1; i < n; ++i) {
            cin >> arr[i];
            value ^= arr[i];
        }
        if (value == 0) {
            cout << 1 << "\n";
            cout << 1 << " " << n << "\n";
        } else {
            if (n % 2 == 0) {
                cout << 2 << "\n";
                cout << 1 << " " << n << "\n";
                cout << 1 << " " << n << "\n";
            } else {
                cout << 4 << "\n";
                cout << 1 << " " << n << "\n";
                cout << 1 << " " << n - 1 << "\n";
                cout << n - 1 << " " << n << "\n";
                cout << n - 1 << " " << n << "\n";
            }
        }
    }
}
