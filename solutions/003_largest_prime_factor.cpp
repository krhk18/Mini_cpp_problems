#include <iostream>
#include <vector>

/*
Problem 3:
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/

int main()
{
    long int number = 600851475143;
    std::vector<int> primes;
    int divisor = 2;
    while (divisor < number)
    {
        if (number % divisor == 0)
        {
            primes.push_back(divisor);
            number = number / divisor;
        }
        else
        {
            divisor++;
        }
    }
    primes.push_back(number);
    std::cout << primes.back() << std::endl;
}