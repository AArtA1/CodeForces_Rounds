#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        vector<int> left(n), right(n);
        left[0] = s[0] == '0' ? 0 : -1;
        for (int j = 1; j < n; ++j) {
            left[j] = left[j - 1];
            if (s[j] == '0') {
                left[j] = j;
            }
        }
        right[n - 1] = s[n - 1] == '1' ? n - 1 : n;
        for (int j = n - 2; j >= 0; --j) {
            right[j] = right[j + 1];
            if (s[j] == '1') {
                right[j] = j;
            }
        }
        set<std::pair<int, int>> set_;
        int l, r;
        for (int j = 0; j < m; ++j) {
            cin >> l >> r;
            int ll = right[l - 1], rr = left[r - 1];
            if (ll > rr) {
                set_.insert({-1, -1});
            } else {
                set_.insert({ll, rr});
            }
        }
        std::cout << set_.size() << "\n";
    };
}
