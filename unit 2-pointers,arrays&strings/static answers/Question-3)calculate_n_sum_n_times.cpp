// You are using GCC
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n;
    cin>>n;
    int arr[n];
    while(t-->0){
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            cout<<arr[i]<<" ";
            sum+=arr[i];
        
        }
        cout<<"SUM: "<<sum<<endl;
        
    }
}