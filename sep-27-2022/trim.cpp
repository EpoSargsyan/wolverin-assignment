#include <iostream>
#include <string>

std::string trim(std::string&);

int main() {
    std::string str = "  hello    ";
    trim(str);
    std::cout << str;
    return 0;
}

std::string trim(std::string& str) {
    int i = 0;
    int j = str.size() - 1;
    bool flag1 = true;
    bool flag2 = true;
    while (flag1 || flag2) {
        if (str[j] == ' ') {
            str.erase(str.begin() + j);
            --j;
        } else {
            flag2 = false;
        }
        if (str[i] == ' ') {
            str.erase(str.begin() + i);
            --j;
        } else {
            flag1 = false;
        }
    }
    return str;
}