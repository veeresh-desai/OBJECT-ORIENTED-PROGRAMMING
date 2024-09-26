// You are using GCC
#include<iostream>
using namespace std;

class Rectangle{
    public:
    
    void Area(int length,int breadth){
        cout<<"Area: "<<length*breadth<<endl;
    }
    void Perimeter(int length,int breadth){
        cout<<"Perimeter: "<<2*(length+breadth);
    }
};

int main(){
    int length,breadth;
    cin>>length>>breadth;
    
    Rectangle rec;
    rec.Area(length,breadth);
    rec.Perimeter(length,breadth);
}