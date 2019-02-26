#include <iostream>

int main()
{
    int a, b, tmp;
    std::cout << "Please input two numbers, seperated by space: " << std::endl;
    std::cin >> a >> b;
    if (a > b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }
    while (a <= b) {
        std::cout << a << std::endl;
        a++;
    }
    return 0;
}
