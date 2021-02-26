#include <iostream>

/*
The sum of the squares of the first ten natural numbers is,
The square of the sum of the first ten natural numbers is,
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is .
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

int main()
{
    long long int sumOfSquares = 0;
    long long int squareOfSum = 0;
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sumOfSquares += i * i;
        //sum += i;
        squareOfSum += i;
    }
    squareOfSum *= squareOfSum;
    //squareOfSum = sum * sum;
    std::cout << squareOfSum - sumOfSquares << std::endl;
}