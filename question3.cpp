#include <iostream>
#include <string>
#include <cstring>

int countWords(const char* str) {
    int count = 0;
    bool in_word = false;
    while (*str) {
        if (std::isalpha(*str)) {
            if (!in_word) {
                count++;
                in_word = true;
            }
        } else {
            in_word = false;
        }
        str++;
    }
    return count;
}

int countWords(const std::string& str) {
    int count = 0;
    bool in_word = false;
    for (char c :: str) {
        if (std::isalpha(c)) {
            if (!in_word) {
                count++;
                in_word = true;
            }
        } else {
            in_word = false;
        }
    }
    return count;
}

int main() {
    char c_str[100];
    std::cout << "Enter a string (C-string version): ";
    std::cin.getline(c_str, 100);
    int c_count = countWords(c_str);
    std::cout << "Number of words: " << c_count << std::endl;

    std::string str;
    std::cout << "Enter a string (std::string version): ";
    std::getline(std::cin, str);
    int count = countWords(str);
    std::cout << "Number of words: " << count << std::endl;

    return 0;
}

