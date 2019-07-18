//
// Created by xiaochen on 2019-07-17.
//
#include <iostream>
#include <stdexcept>

using namespace::std;

int main() {
    int a, b;
    a = 4;
    b = 0;
    try {
        if (b == 0)
            throw runtime_error("devide by 0");
    } catch (runtime_error e) {
        cout << e.what() << endl;
        b = 2;
    }
    cout << a / b << endl;
    return 0;
}