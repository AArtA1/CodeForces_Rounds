#include <bits/stdc++.h>

using namespace std;

const int INF = 10000;

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        vector<int> d(n), s(n);
        for (int j = 0; j < n; j++){
            cin >> d[j] >> s[j];
        }
        int ans = INF;
        for (int j = 0; j < n; j++){
            ans = min(ans, d[j] + (s[j] - 1) / 2);
        }
        cout << ans << endl;
    }
}