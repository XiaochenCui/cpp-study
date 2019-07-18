//
// Created by xiaochen on 2019-07-16.
//
#include <iostream>

using namespace ::std;

int main() {
    int ia[3][4];
    size_t cnt = 0;
    for (int (&row)[4]: ia) {
        for (int &col: row) {
            col = cnt;
            cnt++;
        }
    }


    for (auto &row: ia) {
        for (auto col: row) {
            cout << col << " ";
        }
        cout << endl;
    }

    for (auto i = 0; i < 3; i++) {
        for (auto j = 0; j < 4; j++) {
            cout << ia[i][j] << " ";
        }
        cout << endl;
    }

    for (auto first = begin(ia); first != end(ia); first++) {
        for (auto ifrist = *first; ifrist != end(*first); ifrist++) {
            cout << *ifrist << " ";
        }
        cout << endl;
    }
}
