#include <iostream>

int main()
{
    //Syntax error - wrong operator
    std::cout >> "Hello World!" >> std::endl;
    //Type error - initialize an integer with a string
    int num = "10";
    //Declaration error - using `value1` variable before declaration
    std::cin >> value1;
    int value1 = 0;

    return 0;
}
