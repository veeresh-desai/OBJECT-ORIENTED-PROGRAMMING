// You are using GCC
#include<iostream>
using namespace std;

class Money{
    public:
    void calculate(int r1,int p1,int r2,int p2){
        int r=r1+r2;
        int p=p1+p2;
        
        int x=p/100;
        p%=100;
        cout<<r+x<<"."<<p;
        
    }
};
int main(){
    int r1,p1;
    int r2,p2;
    
    cin>>r1>>p1;
    cin>>r2>>p2;
    Money m1;
    m1.calculate(r1,p1,r2,p2);
}