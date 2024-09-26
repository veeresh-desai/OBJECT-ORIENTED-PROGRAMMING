// You are using GCC
#include<iostream>
using namespace std;
enum lettertype{
    vowel,
    consonant,
    invalid,
};
lettertype analyzeletter(char ch){
    ch=tolower(ch);
    if(ch>='a' && ch<='z'){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            return vowel;
        }else{
            return consonant;
        }
    }else{
        return invalid;
    }
}
int main(){
    char ch;
    cin>>ch;
    
    lettertype result=analyzeletter(ch);
    switch(result){
        case vowel:
        cout<<"vowel";
        break;
        
        case consonant:
        cout<<"consonant";
        break;
        
        case invalid:
        cout<<"Invalid input";
        break;
    }
}