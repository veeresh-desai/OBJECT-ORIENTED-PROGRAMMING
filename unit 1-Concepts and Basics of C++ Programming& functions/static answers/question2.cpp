// You are using GCC
#include<iostream>
#include<iomanip>

using namespace std;

union AccountData{
    struct{
        char name[50];
        int accno;
        double bal;
    }account; 
    
    
};

int main(){
    double dep,draw;
    AccountData a;
    
    cin.getline(a.account.name,50);
    cin>>a.account.accno;
    cin>>a.account.bal;
    cin>>dep;
    a.account.bal+=dep;
    cout<<"Amount deposited successfully."<<endl;
    cin>>draw;
    if(draw<a.account.bal){
        cout<<"Amount withdrawn successfully."<<endl;
        a.account.bal-=draw;
        
    }
    else{
        cout<<"Insufficient balance. Withdrawal failed."<<endl;
    }
    cout<<"Account details:"<<endl;
    cout<<"Account holder's name: "<<a.account.name<<endl;
    
    cout<<"Account number: "<<a.account.accno<<endl;
    cout<<"Balance: "<<fixed<<setprecision(2)<<a.account.bal<<endl;
    
    
    
}