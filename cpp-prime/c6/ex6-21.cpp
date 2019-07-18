//
// Created by xiaochen on 2019-07-18.
//


#include <iostream>

using namespace ::std;

int compare(int a, int *b) {
    if (a > *b) {
        return a;
    }
    return *b;
}

int main() {
    int a = 3, b = 4;
    cout << compare(a, &b) << endl;
}