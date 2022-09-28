#include <iostream>
#include <string>

bool startsWith(std::string, std::string);

int main() {
    std::string str = "hello world";
    std::string start = "hello ";
    std::cout << std::boolalpha << startsWith(str, start) << std::endl;
}

bool startsWith(std::string str, std::string start) {
    for (int i = 0; i < start.size(); ++i) {
        if (str[i] != start[i]) {
            return false;
        } 
    } 
    return true;
}  