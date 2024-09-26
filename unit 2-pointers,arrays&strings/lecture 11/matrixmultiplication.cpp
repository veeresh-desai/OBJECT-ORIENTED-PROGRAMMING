// You are using GCC
#include<iostream>
using namespace std;

int main(){
    int n;
    
    cin>>n;
    int arr1[n][n];
    int arr2[n][n];
    //taking input of 1st array
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr1[i][j];
            
            
        }
        
    }
    //taking input of 2nd array
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr2[i][j];
            
            
        }
        
    }
    
    int res[n][n];
    //
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int sum=0;
            for(int k=0;k<n;k++){
                sum+=arr1[i][k]*arr2[k][j];
                
                
            }
            res[i][j]=sum;
            
            
        }
        
        
    }
    cout<<"The product of the two matrices is: "<<endl;
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
    
}