// You are using GCC
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int fact=1;
    
    
    ofstream outfile;
    outfile.open("numbers.txt");
    if(outfile.is_open()){
        
        for(int i=1;i<=n;i++){
            outfile<<i<<" ";
            fact*=i;
        }
        outfile.close();
    }
    
    cout<<fact<<endl;
    cout<<"Success";
}