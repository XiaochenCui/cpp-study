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
    i = 0;
    int cache;
    for (auto elem: v) {
        if (i % 2 == 0)
            cache = elem;
        else
            cout << cache + elem << endl;
        i++;
    }

    for (i = 0; i < v.size()/2; i++) {
        cout << v[i] + v[v.size()-i-1] << endl;
    }
}

