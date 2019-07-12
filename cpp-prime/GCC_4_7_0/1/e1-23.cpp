#include <iostream>
#include "Sales_item.h"

int main()
{
    int total = 0;

    Sales_item pre, cur;
    if (std::cin >> pre) {
        total++;
        while (std::cin >> cur) {
            if (cur.isbn() == pre.isbn()) {
                total++;
            } else {
                std::cout << "Book " << pre.isbn() << " has "
                    << total << " in total" << std::endl;
                total = 1;
            }
            pre = cur;
        }
        std::cout << "Book " << pre.isbn() << " has "
            << total << " in total" << std::endl;
    } else {
        std::cerr << "No data!" << std::endl;
        return -1;
    }

    return 0;
}
