#include <iostream>

//Checks if a given number is a primenumber
bool IsPrime(unsigned int number);
//Print all primes up to number
void PrintPrimes(unsigned int number);

int main() {
    unsigned int n{};
    std::cin >> n;

    PrintPrimes(n);
    return 0;
}


bool IsPrime(unsigned int number) {
    //If the number is divisible by 2 it is not a prime (In all cases except if the number is 2)
    if ( number != 2 && number % 2 == 0)
        return false;
    //We need to check if the number is 3 because since our for loops starts with i = 3 we will get a false 
    //result. 3 % 3 == 0 is true so it will return false but since 3 is a prime we handle it here instead
    if (number == 3)
        return true;

    //We do not have to iterate any higher than the square root of the number
    //because if the number can be factored into 2 numbers, one of them must be less than or equal to 
    //the square root of the number.
    auto limit = std::sqrt(number);

    for (int i = 3; i <= limit; i++) {
        if (number % i == 0)
            return false;
    }
    return true;
}

void PrintPrimes(unsigned int number) {
    int count{};
    int i{ 3 };
    //The lowest prime is 2
    if (number < 2)
        return;

    std::cout << '2' << std::endl;
    count++;

    //No even number (except 2) can be a prime so we just iterate over all the 
    //odd numbers
    while (i+= 2, count < number) {
        if (IsPrime(i)) {
            std::cout << i << std::endl;
            count++;
        }
    }
}