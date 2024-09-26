// You are using GCC
// You are using GCC
#include<iostream>
#include<cctype>

using namespace std;

int main(){
    string str;
    
    getline(cin,str);
    
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            count++;
        }
    }
    cout<<count+1;
}