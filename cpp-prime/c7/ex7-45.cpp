//
// Created by 崔晓晨 on 2019-07-20.
//

#include <vector>

class NoDefault {
public:
    NoDefault(int a) {};
};

class C {
public:
    C() : mem_a(3) {}

private:
    NoDefault mem_a;
};

int main() {
    std::vector<C> vec(10);
}
