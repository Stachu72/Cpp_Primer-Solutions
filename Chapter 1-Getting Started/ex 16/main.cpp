#include <iostream>

int main()
{
    std::cout << "Enter integers: " << std::endl;
    int num = 0, oddSum = 0, evenSum = 0;
    while(std::cin >> num) {
        evenSum += ((2 + num) / 2) * (num / 2);
        oddSum += ((1 + num) / 2) * ((num + 1) / 2);
    }
    std::cout << "The sum of even numbers is: " << evenSum << std::endl;
    std::cout << "The sum of odd numbers is: " << oddSum << std::endl;

    return 0;
}
