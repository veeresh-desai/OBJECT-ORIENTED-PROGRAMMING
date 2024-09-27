// You are using GCC
#include<iostream>
using namespace std;

class Distance{
    public:
    int feet;
    int inch;
    Distance(){
        
        cin>>feet>>inch;
        
    }
    
};
int main(){
    Distance d1,d2;
    
    // cin>>d1.feet>>d1.inch;
    // cin>>d2.feet>>d2.inch;
    
    int res_f,res_i;
    
    res_f=d1.feet+d2.feet;
    res_i=d1.inch+d2.inch;
    
    res_f+=res_i/12;
    res_i%=12;
    
    cout<<res_f<<"'"<<res_i<<"\"";
    
    
}