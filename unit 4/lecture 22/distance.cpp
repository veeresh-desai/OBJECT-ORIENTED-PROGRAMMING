#include <iostream>
using namespace std;

class Distance {
    int feet;
    int inches;
public:
    Distance(int f, int i) : feet(f), inches(i) {}

    Distance operator-() {
        inches -= 1;
        feet -= 1;
        if (inches < 0) {
            inches += 12;
            feet -= 1;
        }
        if (feet < 0) {
            feet = 0;
            inches = 0;
        }
        return *this;
    }

    friend ostream& operator<<(ostream& out, const Distance& d) {
        out << d.feet << "'" << d.inches << "\"";
        return out;
    }
};

int main() {
    int feet, inches;
    cin >> feet >> inches;
    Distance d(feet, inches);
    -d;
    cout << d;
    return 0;
}
