#include <iostream>
#include <string>

std::string toUpperCase(std::string&);

int main() {
    std::string str = "aaaa";
    std::cout << toUpperCase(str) << std::endl;
    return 0;
}

std::string toUpperCase(std::string& str) {
    for (int i = 0; i < str.size(); ++i) {
        if ((str[i] >= 'a') && (str[i] <= 'z')) {
            str[i] -= 32;
        }
    }
    return str;
}