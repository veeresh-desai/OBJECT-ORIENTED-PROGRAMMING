// You are using GCC
#include <iostream>
#include <iomanip> // for setprecision
using namespace std;

class Acceleration {
public:
    double value;
    
    Acceleration(double v) : value(v) {}
    
    // Overloading the * operator
    double operator*(double time) {
        return value * time;
    }
};

int main() {
    double initial_velocity, acceleration, time;
    cin >> initial_velocity >> acceleration >> time;
    
    Acceleration a(acceleration);
    double final_velocity = initial_velocity + (a * time);
    
    cout << fixed << setprecision(1) << final_velocity << " m/s" << endl;

    return 0;
}
