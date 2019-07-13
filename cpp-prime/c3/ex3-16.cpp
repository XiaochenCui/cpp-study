//
// Created by 崔晓晨 on 2019-07-13.
//
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::vector;
using std::string;
using std::endl;

void print_vector_int(vector<int> v) {
    cout << "size: " << v.size() << endl;
    cout << "content:" << endl;
    for (auto i: v) {
        cout << i << endl;
    }
}

void print_vector_string(vector<string> v) {
    cout << "size: " << v.size() << endl;
    cout << "content:" << endl;
    for (auto i: v) {
        cout << i << endl;
    }
}

int main() {
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    print_vector_int(v1);
    print_vector_int(v2);
    print_vector_int(v3);
    print_vector_int(v4);
    print_vector_int(v5);
    print_vector_string(v6);
    print_vector_string(v7);
}
