//
// Created by 崔晓晨 on 2019-07-13.
//

#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<string> v;
    string word;
    while (cin >> word) {
        cout << word << endl;
        v.push_back(word);
    }
    cout << "input end" << endl;

    for (auto &w: v)
        for (auto &c: w)
            c = toupper(c);

    for (decltype(v.size()) i = 0; i < v.size(); i++) {
        cout << v[i] << '\t';
        if ((i + 1) % 8 == 0)
            cout << endl;
    }
}