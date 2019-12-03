#include<iterator>
#include<vector>
#include<iostream>

bool contain(std::vector<int> &c, int i) {
    for (auto it = c.cbegin(); it != c.cend(); it++) {
        if (i == *it) {
            return true;
        }
    }
    return false;
}

int main(){
    std::vector<int> c = {1, 2, 3, 4};
    std::cout << contain(c, 2) << std::endl;
    std::cout << contain(c, 4) << std::endl;
    std::cout << contain(c, 5) << std::endl;
}