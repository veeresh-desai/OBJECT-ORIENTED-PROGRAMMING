#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Car {
public:
    virtual double findSpeed() const = 0; // Pure virtual function
    virtual int getYear() const = 0;
};

class SportsCar : public Car {
private:
    string model;
    int year;
    int maxSpeed;

public:
    SportsCar(string m, int y, int speed) : model(m), year(y), maxSpeed(speed) {}

    double findSpeed() const override {
        return maxSpeed * 0.621371; // Convert speed to mph
    }

    int getYear() const override {
        return year;
    }

    int getMaxSpeed() const {
        return maxSpeed;
    }

    string getModel() const {
        return model;
    }
};

int main() {
    string model;
    int year, maxSpeed;

    // Input
    cout << "Enter the car model: ";
    getline(cin, model);
    cout << "Enter the year of the car: ";
    cin >> year;
    cout << "Enter the maximum speed of the car (in km/h): ";
    cin >> maxSpeed;

    // Create SportsCar object
    SportsCar car(model, year, maxSpeed);

    // Output
    cout << "Max speed in km/h: " << car.getMaxSpeed() << endl;
    cout << "Max speed in mph: " << fixed << setprecision(2) << car.findSpeed() << endl;
    cout << "Age of the car: " << 2024 - car.getYear() << " years" << endl;

    return 0;
}
