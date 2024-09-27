#include<iostream>
#include<iomanip>
using namespace std;


class Complex{
    public:
    
    float r;
    float i;
    Complex(){    
        cin>>r>>i;
        
        
    }
    
    
    void display(){
        cout<<"Sum of two complex numbers is ";
        
    }
};
int main(){
    Complex c1,c2;
    
    float sum=0.0;
    float sum_i=0.0;
    sum_i=c1.i+c2.i;
    sum=c1.r+c2.r;
    
    
    c1.display();
    cout<<fixed<<setprecision(1)<<sum<<" + "<<fixed<<setprecision(1)<<sum_i<<"i";
}