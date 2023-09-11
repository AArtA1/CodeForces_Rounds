#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n, k, x;
        cin >> n >> k >> x;
        if (x != 1) {
            std::cout << "YES" << "\n";
            std::cout << n << "\n";
            for (int j = 0; j < n; ++j) {
                std::cout << 1 << " ";
            }
        } else {
            if (k == 1 || (k == 2 && n % 2 == 1)) {
                std::cout << "NO";
            } else {
                std::cout << "YES" << "\n";
                int k3 = n / 3;
                int k2 = 0;
                int r = n % 3;
                if (r == 1) {
                    --k3;
                    k2 = 2;
                }
                if (r == 2) {
                    k2 = 1;
                }
                std::cout << k2 + k3 << "\n";
                for (int j = 0; j < k2; ++j) {
                    cout << 2 << " ";
                }
                for (int j = 0; j < k3; ++j) {
                    cout << 3 << " ";
                }
            }
        }
        cout << "\n";
    }
}
