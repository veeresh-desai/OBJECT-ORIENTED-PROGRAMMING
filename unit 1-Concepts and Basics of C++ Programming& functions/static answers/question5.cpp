// You are using GCC
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m;
    m=n%10;
    if(m!=0){
        cout<<m;
    }
    n/=10;
    while(n>0){
        m=n%10;
        cout<<m;
        n/=10;
    }
}