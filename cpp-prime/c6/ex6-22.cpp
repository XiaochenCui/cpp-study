//
// Created by xiaochen on 2019-07-18.
//

#include <iostream>

using namespace::std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 3, b = 4;
    cout << a << " " << b << endl;
    swap(&a, &b);
    cout << a << " " << b << endl;
}