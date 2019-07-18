//
// Created by xiaochen on 2019-07-16.
//
#include <iostream>

using namespace::std;


int main() {
    int a[] = {0, 2,3,5,9};
    for (auto e: a) {
        cout << e << " ";
    }
    cout << endl;

    for (auto &e: a) {
        e = 0;
    }
    for (auto e: a) {
        cout << e << " ";
    }
    cout << endl;
}
