#include <iostream>

int main() {
    unsigned int n{};
    unsigned int whileLoopCounter{};
    unsigned int doWhileLoopCounter{};

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cout << "Hello, World!" << std::endl;
    }

    while (whileLoopCounter++ < n) {
        std::cout << "Hello, World!" << std::endl;
    }

    do {
        std::cout << "Hello, World!" << std::endl;
    } while (++doWhileLoopCounter < n);

    return 0;
}