//
// Created by xiaochen on 2019-07-16.
//

#include <iostream>
#include <vector>

using namespace ::std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6};
    int a[10];

    int *bg = a;
    for (auto i: v)
        *bg++ = i;

    for (int *i = a; i != a + v.size(); i++)
        cout << *i << ' ';
    cout << endl;
}