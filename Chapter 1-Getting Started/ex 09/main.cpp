#include <iostream>

int main()
{
    int num = 50, sum = 0;
    while (num <= 100) {
        sum += num;
        ++num;
    }
    std::cout << sum << std::endl;

    return 0;
}
