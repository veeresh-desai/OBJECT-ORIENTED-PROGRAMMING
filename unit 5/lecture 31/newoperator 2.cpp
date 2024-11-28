// You are using GCC
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    if(n<=0){
        cout<<"Number of Fibonacci numbers should be positive!";
    }else{
        cout<<"Fibonacci Sequence: ";
        int* arr=new int[n];
        
        arr[0]=0;
        if(n>1){
            arr[1]=1;
        }
        
        for(int i=2;i<n;i++){
            arr[i]=arr[i-1]+arr[i-2];
        }
        
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        
        delete[] arr;
    }
    
}