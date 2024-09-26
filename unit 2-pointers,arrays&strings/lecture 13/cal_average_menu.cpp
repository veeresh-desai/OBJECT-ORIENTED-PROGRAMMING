// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;


class RestaurantMenu{
    public:
    
    void calculate(float sum,int n){
        
        cout<<"Average Price: "<<fixed<<setprecision(2)<<sum/n;
        
        
    }
    
};


int main(){
    string menu;

    getline(cin,menu);
    cout<<"Menu Name: "<<menu<<endl;
    
    int n;
    cin>>n;
    
    float val;
    float sum=0.0;
    
    for(int i=0;i<n;i++){
        cin>>val;
        sum+=val;
        
    }
    
    RestaurantMenu r1;
    
    r1.calculate(sum,n);
}