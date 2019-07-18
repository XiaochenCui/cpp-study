//
// Created by xiaochen on 2019-07-18.
//


#include <iostream>
#include <string>

using namespace::std;

bool containCapital(const string &s) {
    for (char c: s) {
        if (isupper(c)) {
            return true;
        }
    }
    return false;
}

void toLower(string &s) {
    for (char &c: s) {
        c = tolower(c);
    }
}

int main() {
    string s1 = "h   hhhCk";
    string s2 = ",,,,,c";

    cout << boolalpha;
    cout << containCapital(s1) << endl;
    cout << containCapital(s2) << endl;

    toLower(s1);
    toLower(s2);

    cout << s1 << endl;
    cout << s2 << endl;
}