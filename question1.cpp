#include <iostream>

int countChars(const char* str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}

int main() {
    char str[100];
    std::cout << "Enter a string: ";
    std::cin.getline(str, 100);
    int count = countChars(str);
    std::cout << "The string has " << count << " characters." << std::endl;
    return 0;
}

