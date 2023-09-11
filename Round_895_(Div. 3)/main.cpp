#include <bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t;++t){
        int n;
        cin >> n;
        vector<int> arr(n);
        uint64_t comp = 1;
        const int MAX = 2*n;
        bool flag = false;
        for(int j = 0; j < n;++j){
            cin >> arr[i];
            comp *= arr[i];
            flag = comp > MAX;
        }

        if(flag){
            int left = 0, right = n-1;
            while(arr[left] == 1){
                ++left;
            }
            while(arr[right] == 1){
                --right;
            }
            std::cout << left << " " << right;
        }else{}
    }
}