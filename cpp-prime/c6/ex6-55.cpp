//
// Created by xiaochen on 2019-07-18.
//

#include <iostream>
#include <vector>

using namespace ::std;

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

int main() {
    vector<int (*)(int, int)> v;
    v.push_back(*add);
    v.push_back(&add);
    v.push_back(add);
    v.push_back(sub);
    v.push_back(mul);
    v.push_back(divide);

    for (auto *f: v) {
        cout << f(10, 5) << endl;
        cout << typeid(f).name() << endl;
    }
}
