#include <iostream>
#include <string>

std::string to_low_to_high(std::string&);

int main() {
    std::string str = "aaBBhJ";
    std::cout << to_low_to_high(str) << std::endl;
    return 0;
}

std::string to_low_to_high(std::string& str) {
    for (int i = 0; i < str.size(); ++i) {
        if ((str[i] >= 'a') && (str[i] <= 'z')) {
            str[i] -= 32;
        }
        else if ((str[i] >= 'A') && (str[i] <= 'Z')) {
            str[i] += 32;
        }
    }
    return str;
}