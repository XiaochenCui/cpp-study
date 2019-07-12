//
// Created by xiaochen on 2019-07-11.
//

#include <iostream>

int main()
{
    int val = 42;
    int *pt = &val;

    std::cout << "the value of *pt is: " << *pt << std::endl;

    *pt = *pt * * pt;

    std::cout << "the value of *pt is: " << *pt << std::endl;
}
