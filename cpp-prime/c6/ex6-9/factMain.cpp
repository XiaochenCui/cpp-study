//
// Created by xiaochen on 2019-07-17.
//

#include <iostream>
#include "Chapter6.h"

using namespace::std;

int main() {
    int n;
    while (cin >> n)
        cout << n << "! = " << fact(n) << endl;

    return 0;
}
