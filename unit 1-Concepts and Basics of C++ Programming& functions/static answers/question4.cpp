// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;
    int digit[10]={0};
    
    while(n>0){
        int m=n%10;
        digit[m]++;
        n/=10;
        
    }
    for(int i=0;i<10;i++){
        if(digit[i]>0){
            cout<<"Digit "<<i<<":"<<setw(2)<<digit[i]<<" times"<<endl;
        }
    }
    
    return 0;
   
}