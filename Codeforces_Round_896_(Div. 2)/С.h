#include <bits/stdc++.h>


using std::vector, std::cin, std::cout;

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    for (int c = 0; c < t; ++c) {
        int n, m;
        cin >> n >> m;
        if (m == 1) {
            std::cout << 0;
        } else {
            cout << std::min(n + 1, m);
        }
        cout << "\n";
        std::vector<int> arr(m);
        if (n + 1 >= m) {
            for (int i = 0; i < m - 1; ++i) {
                for (int j = 0; j < m; ++j) {
                    cout << (m - i + j) % m << " ";
                }
                cout << "\n";
            }
            for (int i = m - 1; i < n; ++i) {
                for (int j = 0; j < m; ++j) {
                    cout << j << " ";
                }
                cout << "\n";
            }
        } else {
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n + 1; ++j) {
                    cout << (n + 1 - i + j) % (n + 1) << " ";
                }
                for (int j = n + 1; j < m; ++j) {
                    std::cout << j << " ";
                }
                cout << "\n";
            }
        }
    }
}
