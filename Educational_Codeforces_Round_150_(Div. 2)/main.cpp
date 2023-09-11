#include <bits/stdc++.h>

void solve() {
    int q, x;
    std::cin >> q >> x;
    std::cout << 1;
    int prev = x;
    bool f = true;
    int mn = x, mx = 1e9 + 10;
    for (int i = 1; i < q; i++) {
        std::cin >> x;
        if (x >= mn and x <= mx) {
            mn = x;
            std::cout << 1;
        }
        else {
            if (f and x <= prev) {
                std::cout << 1;
                mn = x;
                mx = prev;
                f = false;
            }
            else {
                std::cout << 0;
            }
        }
    }
    std::cout << '\n';
}

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); std::cout.tie(nullptr);

    int TEST = 1;
    std::cin >> TEST;
    while (TEST --> 0) {
        solve();
    }

    return 0;
}