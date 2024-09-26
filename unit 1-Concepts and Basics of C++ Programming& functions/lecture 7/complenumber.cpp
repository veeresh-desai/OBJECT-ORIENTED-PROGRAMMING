// You are using GCC
#include<iostream>
using namespace std;

class ComplexNumber{
    
    friend double multiply(double r1,double i1,double r2,double i2);
    
    
};

double multiply(double r1,double i1,double r2,double i2){
    cout<<(r1*r2-i1*i2)<<"+"<<(r1*i2+r2*i1)<<"i";
    
    return 0;
}


int main(){
    double r1,i1,r2,i2;
    
    cin>>r1>>i1;
    cin>>r2>>i2;
    
    multiply(r1,i1,r2,i2);
    
    
    
}