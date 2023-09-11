#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int t;
    cin >> t;
    for(int i = 0; i < t;++i){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int j = 0; j < n;++j){
            cin >> a[j];
        }
        string s;
        cin >> s;
        long long x1 = 0, x2 = 0;
        vector<int> S(n+1);
        S[0] = 0;
        for(int j = 0; j < n; ++j){
            S[j+1] = S[j] ^ a[j];
        }
        for(int j = 0; j < n; ++j){
            if(s[j] == '0'){
                x1 ^= a[j];
            }
            else{
                x2 ^= a[j];
            }
        }
        int q,temp,l,r;
        cin >> q;
        char ch;
        for(int j = 0; j < q; ++j){
            cin >> temp;
            if(temp == 1){
                cin >> l >> r;
                --l;
                x1 ^= (S[l] ^ S[r]);
                x2 ^= (S[l] ^ S[r]);
            }
            else{
                cin >> ch;
                if(ch == '0'){
                    cout << x1;
                }
                else{
                    cout << x2;
                }
                cout << "\n";
            }
        }
    }
}