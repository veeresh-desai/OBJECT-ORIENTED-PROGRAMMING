
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
        for(int j=0;j<c;j++){
            cout<<sum<<" ";
        }
        cout<<endl;    
    }
    t--;
    }   
}