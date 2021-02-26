#include <iostream>

/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/
int main()
{
    int largestPalindrome = 0;
    int product = 0;
    int reverse = 0;
    bool isPalindrome = false;
    for (int i = 100; i < 1000; i++)
    {
        for (int j = 100; j < 1000; j++)
        {
            product = i * j;
            //Find reverse number of product
            reverse = 0;
            int num = product;
            int nrOfDigits = 0;
            while (num != 0)
            {
                int digit = num % 10;
                reverse = reverse * 10 + digit;
                num = num / 10;
            };
            //Set as largest if is palindrome and larger than last found palindrome
            if (product == reverse && product > largestPalindrome)
                largestPalindrome = product;
        }
    }
    std::cout << largestPalindrome << '\n';
}