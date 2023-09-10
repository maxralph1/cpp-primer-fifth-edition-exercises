#include <iostream>

int main()
{
    int sum = 0;

    for (int i = -100; i <= 100; ++i)
        sum += i;

    std::cout << sum;
}

// The loop sums values from -100 to 100