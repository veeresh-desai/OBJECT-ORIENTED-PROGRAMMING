// You are using GCC
#include<iostream>
using namespace std;

bool isPalindrome(string str){
    
    int n=str.length();
    for(int i=0;i<n/2;i++){
        if(str[i]!=str[n-i-1]){
            return false;
            break;
        }
    }
    return true;
}
int main(){
    string input;
    
    getline(cin,input);
    
    
    if(isPalindrome(input)){
        cout<<"The string is a palindrome";
        
    }else{
        cout<<"The string is not a palindrome";
    }
    
    
}