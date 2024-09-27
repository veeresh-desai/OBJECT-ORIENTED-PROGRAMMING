// You are using GCC
#include<iostream>
#include<fstream>
using namespace std;


int main(){
    int n;
    cin>>n;
    
    ofstream outfile;
    
    outfile.open("sample.txt");
    int num;
    int sum=0;
    
    for(int i=0;i<n;i++){
        cin>>num;
        sum+=num;
        
    }
    outfile<<sum<<" ";
    
    outfile.close();
    outfile.open("sample.txt");
    
    cout<<sum;
}