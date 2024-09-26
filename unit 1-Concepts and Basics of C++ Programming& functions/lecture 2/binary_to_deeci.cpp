// You are using GCC
#include<iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;
    
    int base=1;
    int deci=0;
    
    
    while(n>0){
        int last_digit=n%10;
        n/=10;
        deci+=last_digit * base;
        base =base * 2;
        
    }
    cout<<"Decimal: "<<deci;
    
    
}