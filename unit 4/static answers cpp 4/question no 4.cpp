// You are using GCC
#include <iostream>
#include <iomanip> // For setprecision
using namespace std;

class CarPrice {
protected:
    double price;
public:
    CarPrice(double p) : price(p) {}
};

class LoanInterestRate {
protected:
    double interestRate;
public:
    LoanInterestRate(double rate) : interestRate(rate) {}
};

class CarLoan : public CarPrice, public LoanInterestRate {
private:
    int years;
public:
    CarLoan(double p, double rate, int y) : CarPrice(p), LoanInterestRate(rate), years(y) {}

    double calculateTotalInterest() const {
        return price * interestRate * years;
    }
};

int main() {
    double price, rate;
    int years;
    cin >> price >> rate >> years;

    CarLoan loan(price, rate, years);
    double totalInterest = loan.calculateTotalInterest();

    cout << "Total interest paid: Rs." << fixed << setprecision(2) << totalInterest << endl;

    return 0;
}    