#include <iostream>
#include <string>
using namespace std;

struct Salesperson {
    string name;
    int totalSales;
    int months;
};

int main() {
    Salesperson sp;
    int *totalSalesPtr = &sp.totalSales;  // Pointer to totalSales data member

   
    getline(cin, sp.name);

    cin >> sp.months;

    
    *totalSalesPtr = 0;

    for (int i = 0; i < sp.months; i++) {
        int sales;
        cin >> sales;
        *totalSalesPtr += sales;
    }

    // Calculate average sales per month
    int averageSales = *totalSalesPtr / sp.months;

    // Output the salesperson's details
    cout << "Salesperson Details:" << endl;
    cout <<"Name: "<< sp.name << endl;
    cout << "Total Sales: " << *totalSalesPtr << endl;
    cout << "Average Sales: " << averageSales << endl;

    return 0;
}
