// You are using GCC
#include<iostream>
#include<cmath>
using namespace std;

inline int sumOfSquaresEven(int n){
    int sum=0;
    for(int i=0;i<=n;i++){
        sum+=pow((2*i),2);
    }
    cout<<sum<<endl;
    
    return 0;
}

inline int sumOfSquaresOdd(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=pow((2*i-1),2);
    }
    cout<<sum;
    
    return 0;
    
}
int main(){
    int n;
    cin>>n;
    
    sumOfSquaresEven(n);
    sumOfSquaresOdd(n);
    
}