// You are using GCC
#include <iostream>
#include <iomanip> 
using namespace std;

int calc(int a) {
   //Type your code
   return a*a;
}

int calc(int x, int y) {
    //Type your code
    
    return x%y;
}

double calc(double n1,double n2) {
    //Type your code
    
    return n1/n2;
}

int main() {
    int x, y;
    double n1, n2;
    //Type your code here
    cin>>x>>y;
    cin>>n1>>n2;

    cout << "Square of " << x << ": " << calc(x) << endl;
    cout << "Modulus of " << x << ", " << y << ": " << calc(x, y) << endl;
    cout << "Quotient of " << n1 << ", " << n2 << ": " << fixed << setprecision(2) << calc(n1, n2);

    return 0;
}