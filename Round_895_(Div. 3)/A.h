#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int a, b, c;
    for (int i = 0; i < n; ++i) {
        std::cin >> a >> b >> c;
        int counter = 0;
        if (a < b) {
            std::swap(a, b);
        }
        while (a > b) {
            if (a - b > 2 * c) {
                a -= c;
                b += c;
                ++counter;
            } else {
                ++counter;
                a = b;
            }
        }
        std::cout << counter << "\n";
    }
}
