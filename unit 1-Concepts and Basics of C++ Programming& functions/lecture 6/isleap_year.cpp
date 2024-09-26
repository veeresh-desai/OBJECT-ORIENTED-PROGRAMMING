// You are using GCC
#include<iostream>
using namespace std;

inline void isleapyear(int n){
    if(n%400==0){
        cout<<n<<" is a leap year";
    }
    else if(n%100==0){
        cout<<n<<" is not a leap year";
        
    }
    else if(n%4==0){
        cout<<n<<" is a leap year";
    }
    else{
        cout<<n<<" is not a leap year";
    }
    
}
int main(){
    int n;
    cin>>n;
    isleapyear(n);
}