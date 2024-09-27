// You are using GCC
#include<iostream>
using namespace std;


class Vehicle{
    public:
    
    string str;
    Vehicle(){
        cin>>str;
        cout<<str<<endl;
    }
    
    Vehicle(int year){
        
        cout<<year;
    }
};

int main(){
    cout<<"Registration Number: ";
    Vehicle v1;
    cout<<"Make: ";
    Vehicle v2;
    cout<<"Model: ";
    Vehicle v3;
    cout<<"Year of Manufacture: ";
    int year;
    cin>>year;
    Vehicle v4(year);
    
}