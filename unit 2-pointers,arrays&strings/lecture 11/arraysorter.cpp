// You are using GCC
#include<iostream>
#include<algorithm>

using namespace std;
class ArraySorter{
    public:
    
    
    void print(int arr[]){
        
        bool same=false;
        for(int i=0;i<10;i++){
            if(arr[i]==arr[i+1]){
                
                same=true;
                continue;
            }
            
            if(same==false){
                cout<<"Arranged elements are: ";
                for(int i=0;i<10;i++){
                    cout<<arr[i]<<" ";
                    
                }
                same=false;
                break;
                
            }
            
            
            
        }
        if(same==true){
        cout<<"All numbers are the same";
        }
    }   
    
    
    
    
};

int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        cin>>arr[i];
        
    }
    
    sort(arr,arr+10);
    int n=10;
    
    ArraySorter a1;
    
    a1.print(arr);
    
}