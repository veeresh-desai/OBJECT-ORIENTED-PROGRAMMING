// You are using GCC
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

class area{
    public:
    void square(int s){
        cout<<"Area of the square: "<<s*s<<endl;
    }
    void rectangle(int l,int b){
        cout<<"Area of the rectangle: "<<l*b<<endl;
    }
    void circle(float r){
        cout<<"Area of the circle: " <<fixed<<setprecision(2)<<3.14*r*r<<endl;
    }
    void parallelogram(float b,float h){
        cout<<"Area of the parallelogram: "<<fixed<<setprecision(2)<<b*h<<endl;
    }
};
int main(){
    area a1;
    int side;
    cin>>side;
    a1.square(side);
    
    int length,breadth;
    cin>>length>>breadth;
    a1.rectangle(length,breadth);
    
    float radius;
    cin>>radius;
    a1.circle(radius);
    
    float base,height;
    cin>>base>>height;
    a1.parallelogram(base,height);
    
}