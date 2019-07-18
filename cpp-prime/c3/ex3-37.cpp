//
// Created by xiaochen on 2019-07-16.
//

#include <iostream>

using namespace::std;

int main() {
    const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char *cp = ca;
    while (*cp) {
        cout << *cp << endl;
        ++cp;
    }
}