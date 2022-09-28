#include <iostream>

void cycle(int);
int res = 0;

int main() {
    int number = 0;
    std::cout << "Please enter number" << std::endl;
    std::cin >> number;
    cycle(number);
    return 0;
}

void cycle(int number) {
    if(0 > number) {
        return;
    }
    std::cout << res << " ";
    ++res;
    return cycle(--number);
}