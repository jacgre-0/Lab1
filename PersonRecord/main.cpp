#include <string>
#include <iostream>

void PersonRecord();

int main() {
    PersonRecord();
    return 0;
}

void PersonRecord() {
    //User information variables
    std::string name{};
    unsigned int age{};
    char gender{};
    std::string address{};
    bool isMarried{};
    float heightInMeters{};

    //Fill information about the user
    std::cout << "Name: ";
    std::cin >> name;

    std::cout << "Age: ";
    std::cin >> age;

    std::cout << "Gender: ";
    std::cin >> gender;

    std::cout << "Address: ";
    std::cin >> address;

    std::cout << "Married?: ";
    std::cin >> isMarried;

    std::cout << "Height (in meters): ";
    std::cin >> heightInMeters;

    //output the information to the console
    std::cout << std::endl;
    std::cout << "Name: "    << name << std::endl;
    std::cout << "Age: "     << age << std::endl;
    std::cout << "Gender: "  << gender << std::endl;
    std::cout << "Address: " << address << std::endl;
    std::cout << "Married: " << std::boolalpha << isMarried << std::endl;
    std::cout << "Height: "  << heightInMeters << std::endl;
}