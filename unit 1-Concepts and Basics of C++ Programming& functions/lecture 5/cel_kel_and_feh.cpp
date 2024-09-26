// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;

class Temperature_Converter{
    public:
    void fandk(double cel){
        cout<<"Temperature in Fahrenheit: "<<fixed<<setprecision(2)<<(9.0/5.0)*(cel)+32<<endl;
        cout<<"Temperature in Kelvin: "<<fixed<<setprecision(2)<<cel+273.15;
    }
    
    
};
int main(){
    double cel;
    cin>>cel;
    Temperature_Converter f1;
    f1.fandk(cel);
    
}