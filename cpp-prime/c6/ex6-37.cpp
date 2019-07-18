//
// Created by xiaochen on 2019-07-18.
//

#include <string>

using namespace::std;

string (&foo1())[10];

using arr_str_type = string[10];
arr_str_type &foo2();

auto foo3() -> string(&)[10];

string str[10] = {};
decltype(str) &foo4();


