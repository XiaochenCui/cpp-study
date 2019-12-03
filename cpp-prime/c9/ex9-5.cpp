#include<iterator>
#include<vector>
#include<iostream>

std::vector<int>::const_iterator
contain(std::vector<int> &c, int i) {
    for (auto it = c.cbegin(); it != c.cend(); it++) {
        if (i == *it) {
            return it;
        }
    }
    return c.cend();
}

int main(){
    std::vector<int> c = {1, 2, 3, 4};
    auto it = contain(c, 2);
    if (it == c.end()) {
        std::cout << "not found" << std::endl;
    } else {
        std::cout << "found" << std::endl;
    }
}