#include <bits/stdc++.h>
#include <queue>

using namespace std;


int main() {
    int t;
    cin >> t;
    for (int l = 0; l < t; ++l) {
        int n;
        char k, ch;
        cin >> n >> k;
        bool flag = false;
        queue<char> q;
        for (int i = 0; i < n; ++i) {
            cin >> ch;
            if (k > ch && !flag) {
                flag = true;
                q.push(k);
            }
            q.push(ch);
        }
        if (!flag) {
            q.push(k);
        }
        while (!q.empty()) {
            std::cout << q.front();
            q.pop();
        }
        cout << "\n";
    }
}
