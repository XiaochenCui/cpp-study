//
// Created by xiaochen on 2019-07-17.
//

#include <iostream>

using namespace::std;

void reset(int &a) {
    a = 0;
}

void reset(int *a) {
    *a = 2;
}

int main() {
    int a = 42;
    cout << a << endl;
    reset(a);
    cout << a << endl;
    reset(&a);
    cout << a << endl;
}