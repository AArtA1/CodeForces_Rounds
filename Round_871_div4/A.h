#include <iostream>

using std::cin, std::cout;


int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    const std::string str = "codeforces";
    std::string temp;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        int counter = 0;
        for (int j = 0; j < 10; ++j) {
            if (temp[j] != str[j]) {
                ++counter;
            }
        }
        cout << counter << "\n";
    }
}
