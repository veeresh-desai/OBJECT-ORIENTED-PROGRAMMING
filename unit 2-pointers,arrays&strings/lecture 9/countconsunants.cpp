// You are using GCC
#include<iostream>
#include<cctype>

using namespace std;

int main(){
    string str;
    
    getline(cin,str);
    
    int count=0;
    for(int i=0;i<str.length();i++){
        char s=tolower(str[i]);
        
    
        if(isalpha(s)&& !(s=='i'||s=='a'||s=='o'||s=='e'||s=='u')){
            count++;
        }
        
    }
    cout<<count;
}