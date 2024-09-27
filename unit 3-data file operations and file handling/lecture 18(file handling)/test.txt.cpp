#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int inum;
    float dnum;
    string str;
    
    ofstream outfile;
    outfile.open("test.text");
    if(outfile.is_open()){
        cin>>inum;
        cin>>dnum;
        cin>>str;
        
        outfile<<inum;
        outfile<<dnum<<endl;
        outfile<<str;
        
        outfile.close();
    }
    
    cout<<inum;
    cout<<dnum<<endl;
    cout<<str;
    cout<<endl;
    
    
    cout<<"Sum of integer and float: "<<inum+dnum;

}