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

    using row_t = int[4];

    for (row_t &row: ia) {
        for (int &col: row) {
            cout << col << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << ia[i][j] << " ";
        }
        cout << endl;
    }

    for (row_t *first = ia; first != end(ia); first++) {
        for (int *ifrist = begin(*first); ifrist != end(*first); ifrist++) {
            cout << *ifrist << " ";
        }
        cout << endl;
    }
}
