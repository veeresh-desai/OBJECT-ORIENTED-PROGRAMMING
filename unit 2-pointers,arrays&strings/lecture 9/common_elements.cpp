// You are using GCC
#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n;
    int arr1[n];
    int arr2[m];
    
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    bool found=false;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                found=true;
                break;
            }
        }
    }
    if(found==false){
        cout<<"No common IDs found";
    }
}