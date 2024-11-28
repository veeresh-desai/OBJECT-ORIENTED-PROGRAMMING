#include <iostream>
using namespace std;

class Number {
public:
    virtual ~Number() {} // Virtual destructor

    bool isNeon(int n) {
        if (n <= 0) return false; // Invalid input check
        int square = n * n;
        int sum_of_digits = 0;
        while (square > 0) {
            sum_of_digits += square % 10;
            square /= 10;
        }
        return sum_of_digits == n;
    }
};

int main() {
    int n;
    cin >> n;

    if (n <= 0 || n > 20) {
        cout << "Invalid" << endl;
    } else {
        Number num;
        if (num.isNeon(n)) {
            cout << n << " is a Neon Number" << endl;
        } else {
            cout << n << " is Not a Neon Number" << endl;
        }
    }

    return 0;
}




//second method


// You are using GCC
#include <iostream>
using namespace std;

class Main {
public:
   //Type your code here
   
   
   Main(int n){
       if(n>20){
           cout<<"Invalid";
       }
       else{
           if(isNeon(n)){
               cout<<n<<"is a Neon Number";
           }else{
               cout<<n<<"is not a Neon Number";
           }
       }
   }
   
   
   bool isNeon(int n){
       int temp=n*n;
       int sum=0;
       while(temp>0){
           sum+=temp%10;
           temp/=10;
       }
       
       if(sum==n){
           return 1;
       }
       else{
           return 0;
       }
           
       
   }
   virtual ~Main(){}
   
   
   
   
   
};

int main() {
    int n;
    cin >> n;
    Main obj(n);
    return 0;
}