#include <iostream>

int main() {
    int n;
    std::cin >> n;
    std::string s;
    for(int i = 0; i < n;++i){
        std::cin >> s;
        if(s.find("1") < s.find("3")){
            std::cout << "13";
        }
        else{
            std::cout << "31";
        }
        std::cout << "\n";
    }
}
