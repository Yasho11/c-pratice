#include <iostream>
#include <cstring>

void displayBackward(const char* str) {
    int length = std::strlen(str);
    for (int i = length - 1; i >= 0; i--) {
        std::cout << str[i];
    }
    std::cout << std::endl;
}

int main() {
    char str[100];
    std::cout << "Enter a string: ";
    std::cin.getline(str, 100);
    std::cout << "The string backward is: ";
    displayBackward(str);
    return 0;
}

