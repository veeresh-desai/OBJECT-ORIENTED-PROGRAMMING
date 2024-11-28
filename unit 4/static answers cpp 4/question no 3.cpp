// You are using GCC
#include <iostream>
#include <iomanip> // For setprecision
using namespace std;

class Circle {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double getRadius() const { return radius; }
};

class Cylinder : private Circle {
private:
    double height;
public:
    Cylinder(double r, double h) : Circle(r), height(h) {}

    double volume() const {
        double r = getRadius();
        return 3.14 * r * r * height;
    }
};

int main() {
    double radius, height;
    cin >> radius >> height;

    Cylinder cylinder(radius, height);
    double volume = cylinder.volume();

    cout << fixed << setprecision(2) << volume << endl;

    return 0;
}
