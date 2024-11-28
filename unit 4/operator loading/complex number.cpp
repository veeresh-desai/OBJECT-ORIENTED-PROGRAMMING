#include<iostream>

using namespace std;

class Complex_number{
    int x;
    int y;
public:
    Complex_number(int a=0, int b=0) {
        x = a;
        y = b;
    }

    void print_number() {
        cout << x << "+i" << y;
    }

    Complex_number operator+(Complex_number &c) {
        Complex_number m;
        m.x = x + c.x;
        m.y = y + c.y;
        return m;
    }
};

int main() {
    Complex_number c1(5, 7), c2(7, 8);
    Complex_number c3 = c1 + c2;
    c3.print_number();
    return 0;
}
