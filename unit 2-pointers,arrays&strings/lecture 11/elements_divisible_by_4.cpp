// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    
    int sum=0;
    int count=0;
    
    int arr1[n];
    for(int i=0;i<n;i++){
        
        
        if(arr[i]%4!=0){
            
            cin>>arr[i];
            arr1[count]=arr[i];
            count++;
            
        }
    } 
    if(count>0){
        
    cout<<"Elements not divisible by 4: ";
    for(int i=0;i<count;i++){
        cout<<arr1[i]<<" ";
        sum+=arr1[i];
    }
    
    cout<<endl;
    cout<<"Sum: "<<sum<<endl;
    cout<<"Average: "<<fixed<<setprecision(2)<<static_cast<double>(sum)/count<<endl;
    cout<<"Count: "<<count<<endl;
    }
    else{
        cout<<"All elements are divisible by 4";
    }
        
        
    
}