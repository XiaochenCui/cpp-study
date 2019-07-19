//
// Created by xiaochen on 2019-07-19.
//

#include <iostream>
#include <string>

using namespace ::std;

class Screen {
public:
    using pos = string::size_type;
    using content_type = char;

    Screen() = default;

    Screen(pos ht, pos wd)
            : height(ht), width(wd), contents(ht * wd, ' ') {}

    Screen(pos ht, pos wd, content_type c)
            : height(ht), width(wd), contents(ht * wd, c) {}

    Screen(pos cursor);

    const content_type &get() const { return contents[cursor]; }

    content_type &get() { return contents[cursor]; }

    const content_type &get(pos row, pos col) const;

    content_type &get(pos row, pos col);

    Screen &move(pos row, pos col) {
        cursor = row * width + col;
        return *this;
    }

    Screen &set(content_type c) {
        contents[cursor] = c;
        return *this;
    }

    Screen &display(ostream &os) {
        os << contents[cursor];
        return *this;
    }

private:
    pos cursor = 0;
    pos width = 0;
    pos height = 0;
    string contents;
};

inline
const Screen::content_type &Screen::get(pos row, pos col) const {
    return contents[row * width + col];
}

inline
Screen::content_type &Screen::get(pos row, pos col) {
    return contents[row * width + col];
}

int main() {
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(cout);
    cout << endl;
    myScreen.display(cout);
    cout << endl;
}

