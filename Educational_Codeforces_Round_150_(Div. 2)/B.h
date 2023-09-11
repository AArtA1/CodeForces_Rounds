#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        vector<int> arr(n);
        bool flag = true;
        cin >> arr[0];
        cout << 1 << " ";
        for (int j = 1; j < n; ++j) {
            cin >> arr[j];
            if (flag) {
                if (arr[j] < arr[j - 1]) {
                    flag = false;
                } else {
                    cout << 1 << " ";
                    continue;
                }
            }
            if (arr[j] > arr[0]) {
                cout << 0 << " ";
            } else {
                cout << 1 << " ";
            }
        }
        cout << "\n";
    }
}