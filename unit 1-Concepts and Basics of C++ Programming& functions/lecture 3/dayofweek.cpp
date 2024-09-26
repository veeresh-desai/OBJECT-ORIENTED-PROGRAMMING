// You are using GCC
#include<iostream>
using namespace std;

class DayofWeek{
    public:
    void week(int n){
        switch(n){
            case 1:
            cout<<"Sunday";
            break;
            
            case 2:
            cout<<"Monday";
            break;
            
            case 3:
            cout<<"Tuesday";
            break;
            
            case 4:
            cout<<"Wednesday";
            break;
            
            case 5:
            cout<<"Thursday";
            break;
            
            case 6:
            cout<<"Friday";
            break;
            
            case 7:
            cout<<"Saturday";
            break;
            
            case 0:
            cout<<"Weekend";
            break;
            
            default:
            cout<<"Invalid";
            break;
        }
    }
    
};
int main (){
    int n;
    cin>>n;
    DayofWeek week1;
    week1.week(n);
}
