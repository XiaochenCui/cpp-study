//
// Created by xiaochen on 2019-07-16.
//
#include <string>
#include <iostream>

using namespace ::std;

int main() {
    string s1 = "cxc", s2 = "hi";
    if (s1 == s2)
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;

    char cs1[100] = "cxc";
    char cs2[100] = "hi";
    if (!strcmp(cs1, cs2))
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;

    return 0;
}