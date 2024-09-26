// You are using GCC
#include<iostream>
using namespace std;

class multiplicationGame{
    public:
    void game(int n){
        int p=1;
        int count=1;
        
        while(n>p){
            p=p*count;
            count++;
        }
        if(count%2==0){
            cout<<n<<" John wins";
        }
        else{
            cout<<n<<" Michael wins";
        }
    }
    
};

int main(){
    int n;
    cin>>n;
    multiplicationGame m1;
    m1.game(n);
    
    
}