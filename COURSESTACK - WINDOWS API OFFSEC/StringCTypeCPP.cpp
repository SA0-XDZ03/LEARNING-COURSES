#include <iostream>
#include <cstring>

int main() {
    char text[20];
    strcpy_s(text, sizeof(text), "Hello");

    std::cout << "Text: " << text << std::endl;
    std::cout << "Length: " << strlen(text) << std::endl;

    return 0;
}

