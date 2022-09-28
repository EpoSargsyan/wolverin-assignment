#include <iostream>
#include <string>

int last_index_of(const std::string&, const std::string&);

int main() {
    std::string str = "hello bg hello";
    std::string ptr = "ll";
    std::cout << last_index_of(str, ptr);
    return 0;
}

int last_index_of(const std::string& str, const std::string& ptr) {
    int ind = -1;
    int j = 0;
    int count = 0;
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == ptr[j++]) {
            ++count;
            continue;
        }   
        if (count == ptr.size()) {
            ind = i;
            ind = ind - ptr.size();
        }
        count = 0;
        j = 0;
    }
    return ind;
}