//
// Created by xiaochen on 2019-07-16.
//

#include <iostream>
#include <vector>

using namespace::std;

int main() {
    int a[10] = {20};
    for (auto e: a)
        cout << e << " ";
    cout << endl;

    vector<int> v(begin(a), end(a));
    for (auto e: v)
        cout << e << " ";
    cout << endl;
}