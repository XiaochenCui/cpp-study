#include <iostream>

int main()
{
    int sum = 0, n = 50;
    while (n <= 100) {
        sum += n;
        ++n;
    }
    std::cout << "Sum of 50 to 100 inclusive is "
        << sum << std::endl;
    return 0;
}
