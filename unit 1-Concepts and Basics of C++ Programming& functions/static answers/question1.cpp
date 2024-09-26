// You are using GCC
#include<iostream>
using namespace std;

class Addamount{
    public:
    void print(int a,int b=50){
        cout<<a+b;
    
    }
};
int main(){
    int a;
    cin>>a;
    Addamount ad;
    ad.print(a);
    
}