// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<setw(2)<<left<<'*';
        }
        cout<<endl;
    }
    
}