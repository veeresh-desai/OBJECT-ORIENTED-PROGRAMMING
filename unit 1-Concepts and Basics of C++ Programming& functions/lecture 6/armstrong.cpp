// You are using GCC
#include<iostream>
#include<cmath>
using namespace std;

inline void isarmstrong(int n){
    int count=0;
    int n1=n;
    while(n1>0){
        
        count++;
        n1/=10;
    }
    
    int sum=0;
    int n2=n;
    for(int i=1;i<=count;i++){
        int a=n2%10;
        sum=sum+pow(a,count);
        n2/=10;
    }
    
    if(sum==n){
        cout<<n<<" is an Armstrong number"<<endl;
        
        for(int i=1;i<=n;i++){
            if(n%i==0){
                cout<<i<<" ";
            }
        }
    }
    else{
        cout<<n<<" is not an Armstrong number"<<endl;
    }
    
    
}

    

int main(){
    int n;
    cin>>n;
    isarmstrong(n);
    
}