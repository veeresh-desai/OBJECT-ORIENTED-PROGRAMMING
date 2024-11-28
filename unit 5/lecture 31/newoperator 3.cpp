// You are using GCC
#include<iostream>
using namespace std;

int main(){
    int n;
    
    cin>>n;
    if(n<=0){
        cout<<"Number of integers should be positive!";
        
    }
    else{
        
    
        
        int *arr=new int[n];
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
            
        }
        cout<<"List of Odd Integers: ";
        int found_e=false;
        
        int found_o=false;
        for(int i=0;i<n;i++){
            if(arr[i]%2!=0){
                cout<<arr[i]<<" ";
                found_o=true;
                
            }
            
        }
        
        if(found_o==false){
            cout<<"-1";
        }
        cout<<endl<<"List of Even Integers: ";
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                cout<<arr[i]<<" ";
                found_e=true;
            }
        }
        if(found_e==false){
            cout<<"-1";
        }
        
        delete[] arr;
    }    
}