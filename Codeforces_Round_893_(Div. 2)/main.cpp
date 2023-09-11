#include <bits/stdc++.h>
#include <stack>

using std::stack,std::unordered_map,std::unordered_set,std::cin,std::cout;



unordered_set<int> numbers;

unordered_map<int, int> amount;

stack<std::pair<bool, int>> operations;

stack<int> arr;

stack<stack<int>> deleted_elements;

void add(int value) {
    ++amount[value];
    numbers.insert(value);
    arr.push(value);
}

void del(int quantity, stack<int> *st = nullptr) {
    int val;
    for (int i = 0; i < quantity; ++i) {
        val = arr.top();
        if (st != nullptr) {
            st->push(val);
        }
        if (--amount[val] == 0) {
            numbers.erase(val);
        }
        arr.pop();
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, value;
    cin >> n;
    char ch;
    for (int i = 0; i < n; ++i) {
        cin >> ch;
        if (ch == '+') {
            cin >> value;
            add(value);
            operations.emplace(1, value);
            continue;
        }
        if (ch == '-') {
            cin >> value;
            stack<int> t;
            del(value, &t);
            deleted_elements.push(t);
            operations.emplace(0, value);
            continue;
        }
        if (ch == '?') {
            cout << numbers.size() << "\n";
        }
        if (ch == '!') {
            auto it = operations.top();
            operations.pop();
            if (it.first) {
                del(1);
            } else {
                int m = it.second;
                auto item = deleted_elements.top();
                deleted_elements.pop();
                while (!item.empty()) {
                    add(item.top());
                    item.pop();
                }
            }
        }
    }
}
