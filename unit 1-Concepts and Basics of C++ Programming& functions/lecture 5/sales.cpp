// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;
class sales{
    public:
    static double totalsales;
    
    
    void addsales(double sale){
        totalsales+=sale;
        
    }
    
    void returnsales(){
        cout<<"Total Sales: "<<fixed<<setprecision(2)<<totalsales<<endl;
    }
    
};
double sales::totalsales=0.0;

int main(){
    int n;
    cin>>n;
    
    double a[n];
    sales s1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s1.addsales(a[i]);
        
    }
    s1.returnsales();
    
    return 0;
}