// You are using GCC
#include<iostream>
#include<iomanip>

using namespace std;

class Wall{
    public:
    float length;
    float breadth;
    Wall(){
        cin>>length>>breadth;
        cout<<fixed<<setprecision(1)<<length*breadth;
    }
};
int main(){
    Wall w1;
    
}