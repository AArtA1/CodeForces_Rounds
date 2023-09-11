#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int l, r;
        cin >> l >> r;
        if (r <= 3){
            cout << -1 << endl;
        } else {
            if (r / 2 != (l - 1) / 2){
                if (r )
                    cout << r / 2 << ' ' << r / 2 << endl;
            } else {
                int p = -1;
                for (int j = 2; j * j <= l; j++){
                    if (l % j == 0){
                        p = j;
                    }
                }
                if (p == -1){
                    cout << -1 << endl;
                } else {
                    cout << p << ' ' << l - p << endl;
                }
            }
        }
    }
}