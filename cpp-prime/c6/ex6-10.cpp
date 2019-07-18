//
// Created by xiaochen on 2019-07-17.
//

#include <iostream>

using namespace::std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapR(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 1, b = 3;
    cout << "a: " << a << ", b: " << b << endl;
    swap(&a, &b);
    cout << "a: " << a << ", b: " << b << endl;
    swapR(a, b);
    cout << "a: " << a << ", b: " << b << endl;
}