// You are using GCC
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int n;
    
    cin>>n;
    
    if(n<0 || n>100){
        cout<<"Invalid entry";
    }
    else{
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            cout<<arr[i]<<" ";
        }
    }
}