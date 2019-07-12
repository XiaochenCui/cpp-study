//
// Created by xiaochen on 2019-07-11.
//

#include <iostream>

int main() {
    {
        double dval = 3.14;
        const int &ri = dval;

        std::cout << ri << std::endl;

        int errNumb = 0;
        int *const curErr = &errNumb;

        std::cout << *curErr << std::endl;
        errNumb = 10;
        std::cout << *curErr << std::endl;
        *curErr = 20;
        std::cout << *curErr << std::endl;
    }

    {
        const int i = -1, &r = 0;
        std::cout << r << std::endl;
    }

    {
        const int &const r2;
        const int i2 = i, &r = i;
    }

    {
        int i, *const cp; // wrong
        int *p1, *const p2; // wrong
        const int ic, &r = ic;
        const int *const p3;
        const int *p;
    }

    {
        int &h = 42;
        const int &i = 42;
    }

    return 0;
}
