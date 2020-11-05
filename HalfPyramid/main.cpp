#include <iostream>

void HalfPyramid(int number);
void HalfPyramid(char character);

int main() {
    int number{};
    char character{};

    std::cout << "Number input: ";
    std::cin >> number;

    std::cout << "Character input (Uppercase): ";
    std::cin >> character;

    HalfPyramid(number);
    std::cout << std::endl;
    HalfPyramid(character);
    return 0;
}

void HalfPyramid(int number) {
    for (int i = 1; i <= number; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << j;
        }
        std::cout << std::endl;
    }
}

void HalfPyramid(char character) {
    //Make sure that the character is uppercase
    if (character >= 'A' && character <= 'Z') {
        for (int i = 'A'; i <= character; i++) {
            for (int j = 'A'; j <= i; j++) {
                std::cout << static_cast<char>(i);
            }
            std::cout << std::endl;
        }
    }
}