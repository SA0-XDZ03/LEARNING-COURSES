#include <iostream>

int main() {
    int* array = new int[3];

    array[0] = 10;
    array[1] = 20;
    array[2] = 30;

    for (int i = 0; i < 3; i++) {
        std::cout << "Element " << i << ": " << array[i] << std::endl;
    }

    delete[] array;
    return 0;
}

