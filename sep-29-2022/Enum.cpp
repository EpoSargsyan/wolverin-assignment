#include <iostream>
#include <map>
#include <string>

enum class Colors {Red, Blue, Green};
Colors to_enum(const std::string&);
std::string to_string(const Colors&);

int main() {
    std::cout << (int)to_enum("Red");
    return 0;
}

Colors to_enum(const std::string& rhs) {
    std::map<std::string, Colors> map;
    map["Red"] = Colors::Red;
    map["Blue"] = Colors::Blue;
    map["Green"] = Colors::Green;
    return map[rhs];
}

std::string to_string(const Colors& rhs) {
    std::map<Colors, std::string> map;
    map[Colors::Red] = "Red";
    map[Colors::Blue] = "Blue";
    map[Colors::Green] = "Green";
    return map[rhs];
}

