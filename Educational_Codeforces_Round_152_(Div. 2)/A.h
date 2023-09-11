#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int b, c, h;
        cin >> b >> c >> h;
        int max_b = std::min(b, c + h + 1);
        int max_i = std::min(b - 1, c + h);
        cout << max_b + max_i << "\n";
    }
}
