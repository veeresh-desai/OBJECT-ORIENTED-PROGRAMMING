// You are using GCC
#include<iostream>
using namespace std;

class integerM{
    public:
    void print(int n){
        int count=0;
        int temp=n;
        while(temp>0){
            temp/=10;
            count++;
        }
        cout<<"Number of digits: "<<count<<endl;
        count=0;
        while(n>0){
            int m=n%10;
            if(m%2!=0){
                count++;
            }
            n/=10;
            
        }
        cout<<"Number of odd digits: "<<count<<endl;
        
    }
    
};

int main(){
    int n;
    cin>>n;
    
    integerM i;
    i.print(n);
    
    
    
    
}