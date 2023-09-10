#include <iostream>

int main()
{
    int value1, value2;
    std::cout << "Enter the first digit: ";
    std::cin >> value1;
    std::cout << "Enter the second digit: ";
    std::cin >> value2;

    std::cout << "The sum of the two digits is: " << value1 + value2;
}