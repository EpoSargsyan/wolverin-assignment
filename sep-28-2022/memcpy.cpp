#include <iostream>

void memcpy(void*, void*, size_t);

int main() {
    int num = 3;
    char arr1[] = "Hello world";
    char arr2[] {};
    memcpy(arr1, arr2, num);
    std::cout << arr2; 
    return 0;
}

void memcpy(void* s, void* d, size_t num) {
    char* str = (char*)s;
    char* rhs = (char*)d; 
    int i = 0;
    while (i < num) {
        *(rhs + i) = *(str + i);
        ++i;
    }
}