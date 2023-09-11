#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n, it, k;
        cin >> n >> k;
        vector<std::pair<int, int>> arr(n);
        for (int j = 0; j < n; ++j) {
            cin >> it;
            arr[j] = {it, j};
        }
        vector<int> zeroes;
        for (int j = 0; j < n; ++j) {
            arr[j].first %= k;
            if (arr[j].first == 0) {
                zeroes.push_back(j);
            }
        }
        sort(arr.begin(), arr.end(), [](const pair<int, int> &first, const pair<int, int> &second) {
            return first.first == second.first ? first.second < second.second : first.first > second.first;
        });
        for (int j = 0; j < zeroes.size(); ++j) {
            std::cout << zeroes[j] + 1 << " ";
        }
        int j = 0;
        while (j < n && arr[j].first != 0) {
            std::cout << arr[j].second + 1 << " ";
            ++j;
        }
        cout << "\n";
    }
}
