#include <bits/stdc++.h>
#include <set>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        long long n;
        cin >> n;
        long long x, y;
        cin >> x >> y;
        long long answer = 0;
        long long a = n/x - n / lcm(x,y);
        long long b = n/y - n / lcm(x,y);
        answer += (2 * n - a + 1) * a / 2;
        answer -= (1 + b) * b / 2;
        std::cout << answer << "\n";
    }

}