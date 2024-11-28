// You are using GCC
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int* arr=new int [n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int p;
    cin>>p;
    bool found=false;
    for(int i=0;i<n;i++){
        int fir=arr[i];
        for(int j=i+1;j<n;j++){
            if(fir+arr[j]==p){
                cout<<"("<<fir<<","<<arr[j]<<")"<<endl;
                found=true;
                
            }
            
        }
    }
    
    if(found==false){
        cout<<"No pair";
    }
    delete[] arr;
}



