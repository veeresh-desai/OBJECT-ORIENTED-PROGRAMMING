// You are using GCC
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int sum=a+b;
    bool isodd=sum%2!=0;
    cout<<boolalpha<<isodd;
}