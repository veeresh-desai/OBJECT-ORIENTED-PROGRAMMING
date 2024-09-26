// You are using GCC
#include<iostream>
using namespace std;
union customers{
    void increment(int balance){
        if(balance>1000){
            balance+=100;
            cout<<balance<<" ";
        }
        
    
    }
};

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        customers c1;
        string name;
        int accno;
        int balance;
        cin>>name>>accno>>balance;
        
        c1.increment(balance);
    }
}