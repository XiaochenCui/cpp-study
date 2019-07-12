//
// Created by xiaochen on 2019-07-11.
//

#include <iostream>
#include <type_traits>

int main() {
    const int i = 42;
    auto j = i;
    const auto &k = i;
    auto *p = &i;
    const auto j2 = i, &k2 = i;

    std::cout << typeid(i).name() << std::endl;
    std::cout << typeid(j).name() << std::endl;
    std::cout << typeid(k).name() << std::endl;
    std::cout << typeid(p).name() << std::endl;
    std::cout << typeid(j2).name() << std::endl;
    std::cout << typeid(k2).name() << std::endl;

    std::cout << std::boolalpha << std::endl;
    std::cout << std::is_rvalue_reference<typeof(i)>::value << std::endl;
}

void checkType(auto x) {

}
