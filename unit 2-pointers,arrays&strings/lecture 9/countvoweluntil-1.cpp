
#include<iostream>
#include<cctype>

using namespace std;

int main(){
    char str[1000];
    
    for(int i=0;i<1000;i++){
        
        cin>>str[i];
        if(str[i]==-1){
            break;
        }
    }
    
    int count=0;
    for(int i=0;i<1000;i++){
        if(str[i]==-1){
            break;
        }
        char s=tolower(str[i]);
        
    
        if(isalpha(s)&& (s=='i'||s=='a'||s=='o'||s=='e'||s=='u')){
            count++;
            
        }
        
        
    }
    cout<<count;
}


