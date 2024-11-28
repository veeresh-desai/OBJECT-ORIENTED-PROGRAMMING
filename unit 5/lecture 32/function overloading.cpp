#include <iostream>
using namespace std;

class Calculator {
public:
    int fun1(int num1, int num2, int num3) {
        return num1 * num2 * num3;
    }

    int fun1(int num1, int num2) {
        return num1 + num2;
    }
};

int main() {
    int N;
    cin >> N;

    if (N == 2) {
        int num1, num2;
        cin >> num1 >> num2;
        Calculator calc;
        cout << calc.fun1(num1, num2) << endl;
    } else if (N == 3) {
        int num1, num2, num3;
        cin >> num1 >> num2 >> num3;
        Calculator calc;
        cout << calc.fun1(num1, num2, num3) << endl;
    } else {
        cout << "Invalid Input" << endl;
    }

    return 0;
}









//second 


// You are using GCC
#include<iostream>
using namespace std;

class cal{
    
    public:
    void findsum(int num1,int num2){
        cout<<num1+num2;
        
    }
    
    void findsum(int num1,int num2,int num3){
        cout<<num1*num2*num3;
        
    }
    
};
int main(){
    int n;
    cin>>n;
    
    cal obj;
    if(n==2){
        int num1;
        int num2;
        cin>>num1>>num2;
        obj.findsum(num1,num2);
        
        
    }else if(n==3){
        int num1;
        int num2;
        int num3;
        
        cin>>num1>>num2>>num3;
        obj.findsum(num1,num2,num3);
        
    }
    else{
        cout<<"Invalid Input";
    }
}