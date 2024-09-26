// You are using GCC
#include<iostream>
using namespace std;

class ArrayElement{
    public:
    int n;
    int ser;
    static int count;
    
    void getdata(){
        cin>>n;
        
        
    }
    
    void getsrc(int ser){
        this->ser=ser;
        
        
    }
    
    void compare(){
        if(n==ser){
            count++;
            
        }
        
        
    }
    
    static void print (int ser){
        if(count>0){
            cout<<"The number "<<ser<<" appears "<<count<<"times";
        }
        else{
            cout<<"The number "<<ser<<" is not found in the array";
        }
    }
};

int ArrayElement::count=0;
int main(){
    int n;
    cin>>n;
    ArrayElement num[n];
    
    for(int i=0;i<n;i++){
        
        num[i].getdata();
    }
    
    int ser;
    cin>>ser;
    
    
    
    for(int i=0;i<n;i++){
        num[i].getsrc(ser);
        num[i].compare();
    }
    ArrayElement::print(ser);
}