// You are using GCC
#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ofstream;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    
    cout<<arr[n-1]<<" "<<arr[0];
    
}