//
// Created by xiaochen on 2019-07-19.
//

#include <iostream>
#include <string>

using namespace ::std;

struct Person {
    string getName() const { return name; }

    string getAddr() const { return address; }

    string name;
    string address;
};

istream &read(istream &is, Person &p) {
    is >> p.name >> p.address;
    return is;
}

ostream &print(ostream &os, Person const &p) {
    os << "name: " << p.name << ", address: " << p.address;
    return os;
}

int main() {
    Person c;
    read(cin, c);
    print(cout, c);
}
