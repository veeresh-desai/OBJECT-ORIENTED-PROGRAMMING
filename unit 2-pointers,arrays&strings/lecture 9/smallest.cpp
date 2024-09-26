// You are using GCC
#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
void print(){
    cout<<" ";
}
int main(){
    int n;
    cin>>n;
    float arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    
    
    cout<<fixed<<setprecision(1)<<arr[0];
    
    return 0;
}