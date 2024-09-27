#include<iostream>
using namespace std;

int main(){
    int r1,r2;
    int p1,p2;
    
    cin>>r1>>p1;
    cin>>r2>>p2;
    
    int res_r=r1+r2;
    int res_p=p1+p2;
    
    res_r+=res_p/100;
    res_p%=100;
    
    cout<<res_r<<"."<<res_p;
}