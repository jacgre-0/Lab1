#include <iostream>

int main() {
    unsigned int n{};
    unsigned int whileLoopCounter{};
    unsigned int doWhileLoopCounter{};

    std::cin >> n;

    std::cout << "Using a for loop:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "Hello, World!" << std::endl;
    }

    std::cout << "\nUsing a while loop:" << std::endl;
    while (whileLoopCounter++ < n) {
        std::cout << "Hello, World!" << std::endl;
    }

    std::cout << "\nUsing a do while loop:" << std::endl;
    do {
        std::cout << "Hello, World!" << std::endl;
    } while (++doWhileLoopCounter < n);

    return 0;
}