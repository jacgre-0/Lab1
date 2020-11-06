#include <iostream>

void HalfPyramid(int number);
void HalfPyramid(char character);

int main() {
    int number{};
    char character{};

    printf("Character input (Uppercase): ");
    scanf("%c", &character);

    printf("Number input: ");
    scanf("%d", &number);

    HalfPyramid(number);
    printf("\n");
    HalfPyramid(character);
    return 0;
}

void HalfPyramid(int number) {
    for (int i = 1; i <= number; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}

void HalfPyramid(char character) {
    //Make sure that the character is uppercase
    if (character >= 'A' && character <= 'Z') {
        for (int i = 'A'; i <= character; i++) {
            for (int j = 'A'; j <= i; j++) {
                printf("%c", static_cast<char>(i));
            }
            printf("\n");
        }
    }
}