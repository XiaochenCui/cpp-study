//
// Created by xiaochen on 2019-07-18.
//


#include <iostream>

using namespace::std;

int sum(initializer_list<int> l) {
    int r = 0;
    for (const int *i = l.begin(); i != l.end(); i++) {
        r += *i;
    }
    return r;
}

int main() {
    cout << sum({1, 2, 3}) << endl;
}