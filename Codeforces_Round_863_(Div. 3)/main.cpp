#include <bits/stdc++.h>
#include <queue>

using namespace std;


int main() {
    int t;
    cin >> t;
    for (int l = 0; l < t; ++l) {
        int n,x1,y1,x2,y2;
        cin >> n >> x1 >> y1 >> x2 >> y2;
        if(abs(n/2-x1) == abs(n/2-x2) || abs(n/2 - y1) == abs(n/2-y2)){
            cout << 0;
        }
        else{
            cout << abs((n/2 - x1) - (n/2-x2));
        }
        cout << "\n";
    }
}
