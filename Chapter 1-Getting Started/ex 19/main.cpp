#include <iostream>

int main()
{
    std::cout << "Enter two integers: " << std::endl;
    int num1 = 0 , num2 = 0;
    std::cin >> num1 >> num2;
    if(num1 < num2)
        while(num1 < num2 - 1)
            std::cout << ++num1 << std::endl;
    else
        while(num1 > num2 + 1)
            std::cout << --num1 << std::endl;

    return 0;
}
