#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Point {
public:
    int x, y;
public:
    Point(int x_val, int y_val) : x(x_val), y(y_val) {}
    virtual double calculateDistance(const Point& other) const = 0; // Pure virtual function
};

class Line : public Point {
public:
    Line(int x_val, int y_val) : Point(x_val, y_val) {}
    double calculateDistance(const Point& other) const override {
        int x_diff = other.x - x;
        int y_diff = other.y - y;
        return sqrt(x_diff * x_diff + y_diff * y_diff);
    }
};

int main() {
    int x1, y1, x2, y2;

    // Input
    cout << "Enter the coordinates of the start point (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of the end point (x2 y2): ";
    cin >> x2 >> y2;

    // Create Points
    Line start(x1, y1);
    Line end(x2, y2);

    // Calculate and output the distance
    cout << fixed << setprecision(2);
    cout << "Distance: " << start.calculateDistance(end) << endl;

    return 0;
}
