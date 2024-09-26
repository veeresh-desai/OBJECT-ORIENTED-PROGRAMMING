// You are using GCC
#include<iostream>
using namespace std;

class NonFibonacciElements{
    public:
    bool isfib(int num){
        if(num==0||num==1)return true;
        
        int a=0,b=1,c=1;
        while(c<=num){
            if(c==num) return true;
            a=b;
            b=c;
            c=a+b;
        }
        return false;
        
        
    }
    void nonfib(int arr[],int n){
        for(int i=0;i<n;i++){
            if(!isfib(arr[i])){
                cout<<arr[i]<<" ";
            }
        }
    }
    
};

int main(){
    int n;
    
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    NonFibonacciElements a1;
    a1.nonfib(arr,n);
    
    
}