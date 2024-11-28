#include <iostream>
using namespace std;

class AddAmountBase {
protected:
    int amount;

public:
    // Constructor that initializes the balance to 50
    AddAmountBase() : amount(50) {}

    // Constructor that adds a given amount 'a' to the balance
    AddAmountBase(int a) : amount(50 + a) {}
};

class AddAmount : public AddAmountBase {
public:
    // Default constructor that initializes the balance to 50
    AddAmount() : AddAmountBase() {}

    // Constructor that adds a given amount 'a' to the balance
    AddAmount(int a) : AddAmountBase(a) {}

    // Member function to display the current balance
    void print_amount() {
        cout << "Total amount in Piggie Bank: " << amount << endl;
    }
};

int main() {
    int inputAmount;
    cin >> inputAmount;

    AddAmount obj(inputAmount);
    obj.print_amount();

    return 0;
}
