// You are using GCC
#include<iostream>
using namespace std;

class Operation{
    public:
    inline void calculate(int a,int b){
        cout<<"Addition of two numbers: "<<a+b<<endl;
        cout<<"Difference of two numbers: "<<a-b<<endl;
        cout<<"Product of two numbers: "<<a*b<<endl;
        cout<<"Division of two numbers: "<<a/b<<endl;
        cout<<"Modulus of two numbers: "<<a%b<<endl;
    }
};
int main(){
    int a,b;
    cin>>a>>b;
    Operation o1;
    o1.calculate(a,b);
}