#include <iostream>

int main()
{
    int value, sum = 0;
    for (; std::cin >> value; sum += value){}
    std::cout << "Sum of inputs: " << sum << std::endl;
}
