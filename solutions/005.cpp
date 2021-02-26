#include <iostream>

/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/
int main()
{
    int testNumber = 1;
    bool dividable = false;
    while (dividable == false)
    {
        //Test if testNumber is dividable by 1-10 then set to true (and save number to return)
        int counter = 1;
        bool exit = false;
        while (counter <= 20 && exit == false)
        {
            if (testNumber % counter == 0)
                counter++;
            else
                exit = true;
        }
        if (exit == true)
            testNumber++;
        else
            dividable = true;
    };
    std::cout << testNumber << std::endl;
}