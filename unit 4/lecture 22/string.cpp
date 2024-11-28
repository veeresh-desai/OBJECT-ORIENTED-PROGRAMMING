// You are using GCC
#include<iostream>
#include<cstring>
using namespace std;

class CustomString{
    char str[100];
    public:
    CustomString(char s[]){
        strcpy(str,s);
    }
    
    CustomString operator!(){
        for(int i=0;str[i];i++){
            if(isupper(str[i])){
                str[i]=tolower(str[i]);
            }
            else{
                str[i]=toupper(str[i]);
            }
        }
    }
    
    void display(){
        cout<<"Inverted String: "<<str<<endl;
    }
    
};

int main(){
    char str[100];
    cin.getline(str,100);
    
    CustomString cs(str);
    cout<<"Original String: "<<str<<endl;
    !cs;
    cs.display();
    
    
}