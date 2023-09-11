#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b) {
            if (c % 2 == 0) {
                cout << "Second";
            } else {
                cout << "First";
            }
        } else {
            if (a > b) {
                cout << "First";
            } else {
                cout << "Second";
            }
        }
        cout << "\n";
    }
}
