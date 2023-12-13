// The purpose of the program is to check if a user input is prime
#include "isPrime.h"
#include <iostream>

int main()
{
    // User inputs value for x here
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    // Function called
    isPrime(x);

    return 0;
}