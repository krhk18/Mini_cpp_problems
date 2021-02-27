#include <iostream>
#include <vector>

/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.
*/

int main()
{
    int below = 2000000;
    unsigned long long int sum = 0;
    for (int i = 0; i < below; i++)
    {
        bool isPrime = true;
        if (i < 2) {
            isPrime = false;
        }
        else
        {
            for (int j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime)
        {
            sum += i;
        }
    }
    std::cout << sum << std::endl;
}