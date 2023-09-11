#include <iostream>
#include <vector>

using std::cin, std::cout, std::vector;


int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, size;
    char ch;
    cin >> n;
    std::string str;
    for (int i = 0; i < n; ++i) {
        cin >> size;
        int counter = 0;
        int max = 0;
        for (int c = 0; c < size; ++c) {
            cin >> ch;
            if (ch == ' ') {
                continue;
            }
            if (ch == '0') {
                ++counter;
            } else {
                max = std::max(max, counter);
                counter = 0;
            }
        }
        max = std::max(max, counter);
        cout << max << "\n";
    }
}
