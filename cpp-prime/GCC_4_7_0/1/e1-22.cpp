#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item sum, item;

    if (std::cin >> sum) {
        while (std::cin >> item) {
            if (item.isbn() == sum.isbn()) {
                sum += item;
            } else {
                std::cerr << "Data must refer to same ISBN"
                          << std::endl;
                return -1;
            }
        }
        std::cout << "Sum: " << sum << std::endl;
    }
    return 0;
}
