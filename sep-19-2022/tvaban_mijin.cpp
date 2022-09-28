#include <iostream>
#include <ctime>

double arithmetic_mean(int, int, int);

int main() {
    srand(time(0));
    int num1 = rand() % 200;
    int num2 = rand() % 200;
    int num3 = rand() % 200;

    std::cout << "The first number is" << std::endl << num1 << std::endl;
    std::cout << "The second number is" << std::endl << num2 << std::endl;
    std::cout << "The third number is" << std::endl << num3 << std::endl;
    std::cout << "The result is" << std::endl;
    std::cout << arithmetic_mean(num1, num2, num3) << std::endl;
    return 0;
}

double arithmetic_mean(int num1, int num2, int num3) {
    return (num1 + num2 + num3) / 3;
}