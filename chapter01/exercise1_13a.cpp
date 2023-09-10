#include <iostream>

// This is the translation of "exercise1_9.cpp" into for loop from while loop

int main()
{
    int sum = 0;

    for (int i = 50; i <= 100; ++i)
        sum += i;

    std::cout << "The sum of numbers from 50 to 100 is: " << sum;
}