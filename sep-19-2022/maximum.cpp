#include <iostream>

int max(int, int);

int main() {
    int number1 = 0;
    int number2 = 0;

    std::cout << "Please enter first number" << std::endl;
    std::cin >> number1;
    std::cout << "Please enter secod number" << std::endl;
    std::cin >> number2;
    std::cout << "The maximum is" << std::endl;
    std::cout << max(number1, number2);
    return 0;
}

int max(int num1, int num2) {
    return num1 >= num2 ? num1 : num2;
}
