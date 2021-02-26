#include <iostream>

/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?
*/

int main()
{
    bool flag = false;
    int nrOfPrimes = 0;
    int number = 2;
    while (nrOfPrimes <= 10001)
    {
        flag = false;
        if (number == 2)
        {
            //prime
            nrOfPrimes++;
        }
        for (int i = 2; i <= number - 1; i++)
        {
            if (number % i == 0)
            {
                //not prime
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            //prime
            nrOfPrimes++;
        }
        number++;
    }
    std::cout << number - 1 << std::endl;
}