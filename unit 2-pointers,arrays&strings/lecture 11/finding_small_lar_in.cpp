// You are using GCC
#include<iostream>
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
    cout<<"The largest element is: "<<arr[n-1]<<endl;
    cout<<"The smallest element is: "<<arr[0];
    
}