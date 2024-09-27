#include<iostream>
using namespace std;

int main(){
    int d1_f,d1_i;//d1_f is distance in feet and d1_i is distance in inches
    int d2_f,d2_i;//same as d1
    
    cin>>d1_f>>d1_i;
    cin>>d2_f>>d2_i;
    
    int res_f,res_i;
    
    res_f=d1_f+d2_f;
    res_i=d1_i+d2_i;
    
    res_f+=res_i/12;
    res_i%=12;
    
    cout<<res_f<<"'"<<res_i<<"\"";
    
    
}