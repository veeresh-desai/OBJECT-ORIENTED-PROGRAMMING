// You are using GCC
#include<iostream>
using namespace std;

void print(float price,char ava){
    if(price<2500.50 && ava=='y' || ava=='Y'){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
int main(){
    float price;
    char ava;
    cin>>price>>ava;
    
    
    print(price,ava);
}