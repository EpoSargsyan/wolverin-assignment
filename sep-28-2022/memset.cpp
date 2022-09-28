#include <iostream>

void memset(char*, char, size_t);

int main() {
    char arr[] = "Hello wolrd asi hello wolrd";
    memset(arr + 4, '1', 6);
    std::cout << arr;
    return 0;
}

void memset(char* str, char val, size_t num) {
    int i = 0;
    while (i < num) {
        *(str + i) = val;
        ++i;
    }
}