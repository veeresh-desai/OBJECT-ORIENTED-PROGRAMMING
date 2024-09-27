// You are using GCC
#include<iostream>
#include<fstream>

using namespace std;

int main(){
    int n;
    ofstream outfile;
    
    outfile.open("numbers.text");
    
    if(outfile.is_open()){
        cin>>n;
        
        for(int i=1;i<=n;i++){
            outfile<<i<<endl;
        }
        
    }
    
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    
}