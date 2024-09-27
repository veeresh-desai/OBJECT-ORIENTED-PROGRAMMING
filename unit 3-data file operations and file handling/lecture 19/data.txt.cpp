// You are using GCC
#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

int main(){
    int age;
    float height;
    string name;
    
    ofstream outfile;
    outfile.open("data.txt");
    
    if(outfile.is_open()){
        cin>>age;
        outfile<<age;
        
        cin>>height;
        outfile<<height;
        cin.ignore();
        getline(cin,name);
        outfile<<name;
        
        
        
        cout<<age<<endl;
        cout<<fixed<<setprecision(1)<<height<<endl;
        cout<<name;
        
        outfile.close();
    }
    
    
}