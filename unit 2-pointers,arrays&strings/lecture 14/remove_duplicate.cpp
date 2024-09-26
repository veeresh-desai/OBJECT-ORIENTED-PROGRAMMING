// You are using GCC
#include<iostream>
using namespace std;

void *check(string str,int n){
    int index=0;
    
    for(int i=0;i<n;i++){
        int j;
        for(j=0;j<i;j++){
            if(str[i]==str[j]){
                break;
            }
        }
        if(i==j){
            str[index++]=str[i];
        }
    }
    str.resize(index);
    cout<<str;
    
}
int main(){
    string str;
    cin>>str;
    int n=str.length();
    check(str,n);
    
    
    
}