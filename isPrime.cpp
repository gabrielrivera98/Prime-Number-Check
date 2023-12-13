#include <iostream>

void isPrime(int x)
{
    int i{0};
    // if divisibleBy is 2, then it is a prime
    int divisibleBy{0};
    // This if statement ensures 0 is included as an input option
    if (x == 0) {
        std::cout << " 0 is not a prime number.";
        return;
    }
    else

        while (i < x) {
            i++;
            // This loops through every number less than the input and divides the input
            if (x % i == 0)
                divisibleBy++;

        }
    if (divisibleBy == 2)
        std::cout << x << " is a prime number." << std::endl;
    else
        std::cout << x << " is not a prime number." << std::endl;
}