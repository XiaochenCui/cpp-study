//
// Created by xiaochen on 2019-07-16.
//
#include <iostream>

using namespace::std;

int main() {
    char s1[100] = "hi ";
    char s2[100] = "cxc";

    char s3[200];

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;

    strcpy(s3, s1);
    strcat(s3, s2);

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
}
