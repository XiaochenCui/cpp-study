//
// Created by xiaochen on 2019-07-17.
//

#include "Chapter6.h"

int fact(int n) {
    if (n < 1)
        return n;

    int k = n;
    while (--n)
        k *= n;
    return k;
}

