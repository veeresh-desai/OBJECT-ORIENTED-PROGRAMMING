// You are using GCC
#include<iostream>
using namespace std;

int divisorSum(int n){
    int total=0;
    for(int i=1;i<=n;i++){
        int dsum=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                dsum+=j;
            }
        }
        total+=dsum;
        
    }
    return total;
}
int main(){
    int n;
    cin>>n;
    
    int result=divisorSum(n);
    cout<<result;
}