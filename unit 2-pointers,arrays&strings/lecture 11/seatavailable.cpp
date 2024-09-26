// You are using GCC
#include<iostream>
using namespace std;

class ArraySearch{
    public:
    void search(int arr[],int n,int search){
        bool found=false;
        
        for(int i=0;i<n;i++){
            if(arr[i]==search){
                cout<<"Seat is available";
                found=true;
                
                
            }
            
            
        }
        if(!found){
            cout<<"Seat is not available";
        }
    }
    
};

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int search;
    cin>>search;
    ArraySearch a1;
    a1.search(arr,n,search);
    
}