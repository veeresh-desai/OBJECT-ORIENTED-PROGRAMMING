// You are using GCC
#include <iostream>
using namespace std;

class Base {
    public:
    // Type your code here
    Base(int x){
        cout<<"Base Class Constructor"<<endl;
        cout<<"Value set: "<<x<<endl;
    }
    private:
        int value;
};

class InitializerList {
    public:
    // Type your code here
    InitializerList(int x):base(x){
    
            
        cout<<"InitializerList's Constructor"<<endl;
            
    }
    private:
        Base base;
};

int main() {
    int value;
    cin >> value;
    InitializerList mylist(value);
    return 0;
}