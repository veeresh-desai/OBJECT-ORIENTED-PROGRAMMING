// You are using GCC
#include<iostream>
using namespace std;
class Rectangle{
    public:
    
    static void area(int a,int b){
        cout<< a*b<<endl;
    }
    
    
};

int main(){
    int n;
    cin>>n;
    cout<<"Total number of rectangles: "<<n<<endl;
    int a[n];
    int b[n];
    for (int i=0;i<n;i++){
        cout<<"Area of rectangle "<<i+1<<": ";
        cin>>a[i]>>b[i];
        Rectangle::area(a[i],b[i]);
        
    }
}