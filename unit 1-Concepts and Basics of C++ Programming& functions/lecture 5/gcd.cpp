// You are using GCC
#include<iostream>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    int result=min(x,y);
    inline int gcd(int x,int y);{
        while(result>0){
            if(x%result==0 && y%result==0){
                break;
                
            }
            result--;
        }
    }
    cout<<result;
    
    
}
