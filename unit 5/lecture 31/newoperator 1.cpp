// You are using GCC
#include<bits/stdc++.h>
using namespace std;


int main(){
    int * arr=new int[100];
    int count=0;
    while(true){
        cin>>arr[count];
        if(arr[count]<0){
            break;
        }
        else{
            count++;
        }
    }
    
    int sum=0;
    for(int i=0;i<count;i++){
        sum+=arr[i];
    }
    
    cout<<"Sum: "<<sum<<endl;
    
    cout<<"Average: "<<fixed<<setprecision(2)<<(sum*1.0)/(count);
    
    delete[] arr;
}