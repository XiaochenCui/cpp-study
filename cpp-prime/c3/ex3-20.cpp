//
// Created by 崔晓晨 on 2019-07-13.
//

#include <vector>
#include <iostream>

using namespace::std;

int main() {
    vector<int> v;
    int i;
    while (cin >> i){
        v.push_back(i);
    }
    for (auto i: v) {
        cout << i << " ";
    }
    cout << endl;
}

