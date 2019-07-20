//
// Created by 崔晓晨 on 2019-07-20.
//

#include <string>

using namespace::std;

int main() {
    int i;
    double d;
    const string *ps;
    char *pc;
    void *pv;

    pv = static_cast<void *>(const_cast<string *>(ps));
    i = static_cast<int>(*pc);
}
