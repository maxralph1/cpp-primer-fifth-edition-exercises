#include <iostream>

int main()
{
    std::cout << "Enter the first value, press enter and enter the second and press enter:" << std::endl;

    int v1, v2;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
}