// You are using GCC
#include<iostream>
using namespace std;

int main(){
    string name;
    int age;
    int *ptr=&age;
    
    getline(cin,name);
    cin>>age;
    cout<<"Current age: "<<age;
    cin>>age;
    cout<<"Updated age: "<<age;
}