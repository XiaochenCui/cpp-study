//
// Created by 崔晓晨 on 2019-07-20.
//

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
    C c;

}
