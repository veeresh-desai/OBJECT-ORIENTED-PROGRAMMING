// You are using GCC
#include<iostream>
using namespace std;

class Demo{
    private:
    static int X;
    static int Y;
    
    public: 
    void get(int x,int y){
        X=x;
        Y=y;
        
    }
    
    void fun(){
        cout<<"Value of X: "<<X<<endl;
        cout<<"Value of Y: "<<Y<<endl;
    }
    
};
int Demo::X=10;
int Demo::Y=20;


int main(){
    Demo f1;
    
    f1.fun();
    int x,y;
    cin>>x>>y;
    
    f1.get(x,y);
    f1.fun();
    
}