// You are using GCC
#include<iostream>
#include<cmath>

using namespace std;

int  power(int b,int e){
    return pow(b,e);
}
int main(){
    int b,e;
    cin>>b>>e;
    
    int result=power(b,e);
    cout<<result;
}