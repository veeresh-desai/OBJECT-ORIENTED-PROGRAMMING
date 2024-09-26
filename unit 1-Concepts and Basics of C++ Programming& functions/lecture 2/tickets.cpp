// You are using GCC
#include<iostream>
using namespace std;

int main(){
    int n;
    int m;
    cin>>n>>m;
    
    int x;
    
    x=(m-5*n)/13;
    cout<<"Number of children tickets sold: "<<x<<endl;
    cout<<"Number of adult tickets sold: "<<x+n<<endl;
    cout<<"Number of senior tickets sold: "<<2*x<<endl;
}