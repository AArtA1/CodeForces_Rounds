#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for(int i = 0;i < t;++i){
        int n;
        cin >> n;
        if(n <= 4){
            cout << "Bob";
        }
        else{
            cout << "Alice";
        }
        cout << "\n";
    }
}