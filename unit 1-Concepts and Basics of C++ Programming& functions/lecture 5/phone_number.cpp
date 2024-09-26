// You are using GCC
#include<iostream>
#include<string>
#include<algorithm>
#include<limits>
using namespace std;

class phone_number{
    public:
    void print(long n){
        string num=to_string(n);
        if(num.length()==10 && all_of(num.begin(), num.end(),::isdigit)){
            
        
            cout<<"Your entered number is: "<<n;
        }    
        else{
            cout<<"Entered Phone number is wrong";
        }
    }
};

int main(){
    long n;
    cin>>n;
    phone_number x;
    x.print(n);
    
    
}