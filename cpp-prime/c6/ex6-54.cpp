//
// Created by xiaochen on 2019-07-18.
//

#include <iostream>
#include <vector>

using namespace::std;

typedef int(*pf1)(int, int);
vector<pf1> v1;

int foo(int, int){return 1;}

typedef decltype(foo) *pf2;
vector<pf2> v2;

using fp = int (*)(int, int);
vector<fp> v4;

int main() {
    cout << typeid(v1).name() << endl;
    cout << typeid(v2).name() << endl;
    cout << typeid(v4).name() << endl;
}
