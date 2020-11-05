#include <stdio.h>

void PersonRecord();

int main() {
    PersonRecord();
    return 0;
}

void PersonRecord() {
    //User information variables
    char name[100]{};
    unsigned int age{};
    char gender{};
    char address[100]{};
    int isMarried{};
    float heightInMeters{};

    //Fill information about the user
    printf("Name: ");
    scanf("%s", name);

    printf("Age: ");
    scanf("%d", &age);

    printf("Gender: ");

    //If I don't use a whitespace here in the scanf format 
    //The scanf will not read the character provided by the user. It will read in a whitespace.
    //Because when dealing with characters, scanf does not skip leading whitespaces
    scanf(" %c", &gender);

    printf("Address: ");
    scanf("%s", address);

    printf("Married?: ");
    scanf("%d", &isMarried);


    printf("Height (in meters): ");
    scanf("%f", &heightInMeters);

    //Print the information to the console
    printf("\nName: %s\n", name);
    printf("Age: %d\n", age);
    printf("Gender: %c\n", gender);
    printf("Address: %s\n", address);
    printf("Married: %d\n", isMarried);
    printf("Height: %f\n", heightInMeters);
}