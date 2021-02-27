#include <iostream>

/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

int main()
{
    int first = 0;
    int second = 0;
    int third = 0;

    for(int a = 0; a < 1000; a++) {
        for(int b = a+1; b < 1000; b++) {
            int c = 1000 - a - b;
            if(a*a + b*b == c*c) {
                first = a;
                second = b;
                third = c;
                break;
            }
        }
    }

    std::cout << "c: " << third << '\n';
    std::cout << "a * b * c = " << first << " * " << second << " * " << third << " = " << first*second*third << std::endl;
    std::cout << first << "^2 + " << second << "^2 = " << third << "^2" << std::endl;
    std::cout << first*first + second*second << " = " << third * third << std::endl;
}