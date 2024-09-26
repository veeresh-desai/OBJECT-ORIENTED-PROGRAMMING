// You are using GCC
#include<iostream>
using namespace std;


class Occurrence{
    private:
    string str;
    char ch;
    
    public:
    
    Occurrence(string s,char c){
        str=s;
        ch=c;
    }
    int countOccurrence(){
        int count=0;
        for(int i=0;i<str.length();i++){
            if(str[i]==ch){
                count++;
            }
        }
        return count;
    }
    
    
    
};
int main (){
    string str;
    char ch;
    cin>>str>>ch;
    
    Occurrence occurrence(str,ch);
    
    cout<<occurrence.countOccurrence()<<endl;
    
    
    return 0;
    
}