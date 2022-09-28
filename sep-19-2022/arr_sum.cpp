#include <iostream>

int sum_arr(int*, int);

int main() {
    const int size = 5;
    int arr[size] = {2, 3, 4, 5, -6};

    std::cout << "The sum of array is: " << sum_arr(arr, size) << std::endl;
    return 0;
}

int sum_arr(int* arr, int size) {
    int result = 0;
    for (int i = 0; i < size; ++i) {
        result += arr[i];
    }
    return result;
}