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
        int product=1;
        for(int j=0;j<c;j++){
            product*=arr[i][j];
        }
        for(int j=0;j<c;j++){
            cout<<product<<" ";
        }
        cout<<endl;    
    }
    t--;
    }   
}