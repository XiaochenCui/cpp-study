//
// Created by xiaochen on 2019-07-19.
//

#include <iostream>
#include <string>

using namespace ::std;

struct Person {
    Person() = default;

    Person(const string &n) : name(n) {}

    Person(const string &n, const string &a) : name(n), address(a) {}

    Person(istream &is);

    string getName() const { return name; }

    string getAddr() const { return address; }

    string name;
    string address;
};

Person::Person(istream &is) {
    is >> name >> address;
}

ostream &print(ostream &os, Person const &p) {
    os << "name: " << p.name << ", address: " << p.address;
    return os;
}

int main() {
    Person p1;
    print(cout, p1) << endl;

    Person p2("cxc");
    print(cout, p2) << endl;

    Person p3("cxc", "jincheng");
    print(cout, p3) << endl;

    Person p4(cin);
    print(cout, p4) << endl;
}
