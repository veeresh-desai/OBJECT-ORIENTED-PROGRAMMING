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
    bool counted[n]={false};
    for(int i=0;i<n;i++){
        int count=0;
        if(counted[i]==false){
        
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                counted[j]=true;
            }
            
        }
        if(count==1){
            cout<<arr[i]<<" - "<<count<<" time"<<endl;
        }
        else{
            cout<<arr[i]<<" - "<<count<<" times"<<endl;
        }
        }
    }
    
    
}