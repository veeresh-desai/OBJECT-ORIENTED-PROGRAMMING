// You are using GCC
#include<iostream>
#include<cmath>
using namespace std;

inline int countEvenNumbers(int x){
    int count=0,a;
    while(x>0){
        a=x%10;
        if(a%2==0){
            count++;
        }
        x/=10;
    }
    cout<<count;
    return 0;
}
int main(){
    int n;
    cin>>n;
    int x=pow(n,2);
    countEvenNumbers(x);
}