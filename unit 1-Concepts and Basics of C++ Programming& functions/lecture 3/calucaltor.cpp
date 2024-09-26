#include<iostream>
using namespace std;
class calculator{
    public:
    int add(int a,int b){
        return a+b;
    }
    
    int sub(int a,int b){
        return a-b;
    }
    
    int product(int a, int b){
        return a*b;
    }
    
    void division(int a, int b){
        
        if(b==0){
            cout<<"Division by zero not possible"<<endl;
            
        }
        else{
            cout<<"Division of two numbers: "<<a/b<<endl;
        }
        
        
    }
    void modulus(int a,int b){
        if(b==0){
            cout<<"Division by zero not possible"<<endl;
            
        }
        else{
            cout<<"Modulus of two numbers: "<<a%b<<endl;
        }
        
        
    }
 
};
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    calculator calc;
    
    cout<<"Addition of two numbers: "<<calc.add(a,b)<<endl;
    cout<<"Difference of two numbers: "<<calc.sub(a,b)<<endl;
    cout<<"Product of two numbers: "<<calc.product(a,b)<<endl;
    calc.division(a,b);
    calc.modulus(a,b);
    
    
    return 0;
}