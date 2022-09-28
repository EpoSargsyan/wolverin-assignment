#include <iostream>
#include <string>

std::string itrim(std::string&);

int main() {
    std::string str = "    hello";
    itrim(str);
    std::cout << str;
    return 0;
}

std::string itrim(std::string& str) {
    int i = 0;
    while (str[i] == ' ') {
        str.erase(str.begin() + i);
    }
    return str;
}