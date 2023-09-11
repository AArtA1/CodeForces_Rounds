#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int n;
    std::string first, second;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> first >> second;
        bool flag = false;
        for (int j = 0; j < first.size() - 1; ++j) {
            if (first[j] == second[j] && first[j] == '0' && first[j + 1] == second[j + 1] && first[j + 1] == '1') {
                flag = true;
                break;
            }
        }
        if (flag) {
            std::cout << "YES";
        } else {
            std::cout << "NO";
        }
        std::cout << "\n";
    }
}
