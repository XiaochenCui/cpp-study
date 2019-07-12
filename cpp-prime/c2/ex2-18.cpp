//
// Created by xiaochen on 2019-07-11.
//

#include <iostream>

int main()
{
    int val = 10;
    int *pt = &val;

    std::cout << "the value of pt is: " << pt << std::endl;
    std::cout << "the value of &pt is: " << &pt << std::endl;
    std::cout << "the value of *pt is: " << *pt << std::endl;

    int newVal = 20;
    pt = &newVal;
    std::cout << "the value of *pt is: " << *pt << std::endl;

    std::cout << "the value of newVal is: " << newVal << std::endl;
    *pt = 30;
    std::cout << "the value of newVal is: " << newVal << std::endl;
}
