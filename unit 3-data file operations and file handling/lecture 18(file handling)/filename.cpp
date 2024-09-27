// You are using GCC
#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string name;
    ofstream outfile;
    
    cin>>name;
    outfile.open(name);
    
    if(outfile.is_open()){
       
        
        outfile<<name<<endl;
        
        outfile.close();
        
    }
    
    cout<<"File '"<<name<<"' opened successfully."<<endl;
    cout<<"File '"<<name<<"' closed successfully."<<endl;
}