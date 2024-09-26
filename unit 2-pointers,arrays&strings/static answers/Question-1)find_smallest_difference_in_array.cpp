// You are using GCC
#include<iostream>
#include<iomanip>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    
    sort(arr,arr+n);
    int res[n-1];
    
    for(int i=0;i<n-1;i++){
        res[i]=arr[i+1]-arr[i];
    }
    
    sort(res,res+n-1);
    
    cout<<res[0];
    
}