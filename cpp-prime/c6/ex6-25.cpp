//
// Created by xiaochen on 2019-07-18.
//

#include <iostream>
#include <string>

using namespace::std;

int main(int argc, char *argv[]) {
    string a = argv[1];
    string b = argv[2];
    a += b;
    cout << a << endl;
}