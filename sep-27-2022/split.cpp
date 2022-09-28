#include <iostream>
#include <vector>

std::vector<std::string> split(std::string, std::string);

int main() {
    std::string str = "to:cis,aosd:";
    std::string del = ",:";
   std::vector<std::string>veg;
   veg = split(str,del);
   for (auto it : veg) {
        std::cout << it << std::endl;
   }
}

std::vector<std::string> split(std::string str, std::string symb) {
    std::vector<std::string> vec;
    int ind = 0;
    int j = 0;
    for (int i = 0; i < str.size(); ++i) {
        if ((ind = symb.find(str[i], j)) >= 0) {
            j = i;
            vec.push_back(str.substr(0,j));
            str.erase(str.begin(), str.begin() + j + 1);
            i = 0;
            j = 0;
        }
    }
    return vec;
}
