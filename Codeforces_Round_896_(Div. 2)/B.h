#include <bits/stdc++.h>

const int64_t MAX = 10e9 + 1;

using std::vector, std::cin, std::cout;

int64_t dist(std::pair<int64_t, int64_t> &a, std::pair<int64_t, int64_t> &b) {
    return abs(a.first - b.first) + abs(a.second - b.second);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    for (int c = 0; c < t; ++c) {
        int64_t n, k, a, b;
        cin >> n >> k >> a >> b;
        vector<std::pair<int64_t, int64_t>> arr(n);
        for (int i = 0; i < n; ++i) {
            int64_t x, y;
            cin >> x >> y;
            arr[i] = {x, y};
        }
        if (a <= k && b <= k) {
            cout << 0;
        } else {
            if (a <= k || b <= k) {
                int64_t min_ = MAX;
                if (a <= k) {
                    for (int i = 0; i < k; ++i) {
                        min_ = std::min(dist(arr[i], arr[b - 1]), min_);
                    }
                } else {
                    for (int i = 0; i < k; ++i) {
                        min_ = std::min(dist(arr[i], arr[a - 1]), min_);
                    }
                }
                std::cout << min_;
            } else {
                int64_t min_a = MAX, min_b = MAX;
                for (int i = 0; i < k; ++i) {
                    min_a = std::min(dist(arr[i], arr[a - 1]), min_a);
                    min_b = std::min(dist(arr[i], arr[b - 1]), min_b);
                }
                int64_t min = std::min(min_a + min_b, dist(arr[a - 1], arr[b - 1]));
                cout << min;
            }
        }
        cout << "\n";
    }
}
