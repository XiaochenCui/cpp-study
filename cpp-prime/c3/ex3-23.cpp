//
// Created by 崔晓晨 on 2019-07-13.
//

#include <vector>
#include <iostream>

using namespace::std;

void print_vector_int(vector<int> v) {
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v(10);
    int i = 0;
    for (auto it = v.begin(); it != v.end(); it++) {
        *it = i;
        i++;
    }
    print_vector_int(v);

    for (auto it = v.begin(); it != v.end(); it++) {
        *it *= 2;
    }
    print_vector_int(v);
}
