#include <iostream>
using namespace std;
class Date{
    public:
    void leap(int d,int m,int y){
        cout<<d<<" "<<m<<" "<<y<<endl;
        if(y%400==0){
            cout<<y<<" is a leap year";
        }
        else if(y%100==0){
            cout<<y<<" is not a leap year";
        }
        else if(y%4==0){
            cout<<y<<" is a leap year";
        }
        else{
            cout<<y<<" is not a leap year";
        }
    }
    
};

int main(){
    int day,month,year;
    cin>>day>>month>>year;
    
    Date d1;
    d1.leap(day,month,year);
}