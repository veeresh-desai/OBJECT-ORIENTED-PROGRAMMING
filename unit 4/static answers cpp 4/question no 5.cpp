// You are using GCC
#include <iostream>
#include <iomanip> // For setprecision
using namespace std;

class Vehicle {
protected:
    double fuelConsumption;
    double horsepower;
public:
    Vehicle(double fuel, double hp) : fuelConsumption(fuel), horsepower(hp) {}
    
    double efficiencyRatio() const {
        return horsepower / fuelConsumption;
    }
};

class Electric : virtual public Vehicle {
public:
    Electric(double fuel, double hp) : Vehicle(fuel, hp) {}
};

class Gasoline : virtual public Vehicle {
public:
    Gasoline(double fuel, double hp) : Vehicle(fuel, hp) {}
};

class Hybrid : public Electric, public Gasoline {
public:
    Hybrid(double fuel, double hp) : Vehicle(fuel, hp), Electric(fuel, hp), Gasoline(fuel, hp) {}
    
    string labelEfficiency() const {
        double ratio = efficiencyRatio();
        if (ratio < 5.0) return "Low Efficiency";
        else if (ratio <= 10.0) return "Moderate Efficiency";
        else return "High Efficiency";
    }
};

int main() {
    double fuelConsumption, horsepower;
    cin >> fuelConsumption >> horsepower;
    
    Hybrid hybrid(fuelConsumption, horsepower);
    double ratio = hybrid.efficiencyRatio();
    
    cout << fixed << setprecision(2) << ratio << endl;
    cout << hybrid.labelEfficiency() << endl;

    return 0;
}