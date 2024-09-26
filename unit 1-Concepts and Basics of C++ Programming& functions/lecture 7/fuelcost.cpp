// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;

class Car{
    friend double calculatefuelcost(double fuel,double km,double price);
    
};

double calculatefuelcost(double fuel,double km,double price){
    double cost=((km/100)*fuel)*price;
    cout<<fixed<<setprecision(2)<<cost;
    
    return 0;
    
}

int main(){
    string car;
    getline(cin,car);
    double fuel;
    cin>>fuel;
    double km;
    cin>>km;
    double price;
    cin>>price;
    
    calculatefuelcost(fuel,km,price);
    
}