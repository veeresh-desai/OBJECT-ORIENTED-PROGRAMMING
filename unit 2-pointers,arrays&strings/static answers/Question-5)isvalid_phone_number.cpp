// You are using GCC
#include<iostream>
using namespace std;

bool isvalid(string num){
    if(num.length()!=12){
        return false;
        
    }
    if(num[3]!='-'||num[7]!='-'){
        return false;
        
    }
    for(int i=0;i<12;i++){
        
        if(i!=3 && i!=7 && !isdigit(num[i])){
            return false;
        }

    }
    return true;
}
int main(){
    string num;
    getline(cin,num);
    
    if(isvalid(num)){
        cout<<"Yes, the phone number is valid"<<endl;
        for(int i=0;i<num.length();i++){
            if(isdigit(num[i])){
                cout<<num[i];
            }
        }
    }else{
        cout<<"No,the phone number is not valid";
    }
}