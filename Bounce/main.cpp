#include <iostream>

void Bounce(int n);

int main() {
    int n{};
    std::cout << "Give a natural number: ";
    std::cin >> n;
    Bounce(n);
    return 0;
}

void Bounce(int n) {
    if (n < 0) {
        std::cout << "Error! Input cannot be negative." << std::endl;
        return;
    }

    for (int i = n; i > 0; i--) {
        std::cout << i;
    }

    for (int i = 0; i <= n; i++) {
        std::cout << i;
    }
}