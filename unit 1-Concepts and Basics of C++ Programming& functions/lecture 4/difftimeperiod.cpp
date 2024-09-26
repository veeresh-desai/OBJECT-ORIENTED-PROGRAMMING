// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;

typedef struct Time{
    int HH;
    int mm;
    int ss;
}dt;
int main(){
    dt t1;
    dt t2;
    //cin>>t1.HH>>t1.mm>>t1.ss;
    //cin>>t2.HH>>t2.mm>>t2.ss;
    scanf("%d:%d:%d",&t1.HH,&t1.mm,&t1.ss);
    scanf("%d:%d:%d",&t2.HH,&t2.mm,&t2.ss);
    int dh,dm,ds;
    if(t1.ss<t2.ss){
        t1.mm--;
        t1.ss+=60;
    }
    ds=t1.ss-t2.ss;
    
    if(t1.mm<t2.mm){
        t1.HH--;
        t1.mm+=60;
    }
    
    
    dm=t1.mm-t2.mm;
    dh=t1.HH-t2.HH;
    
    
    cout<<setfill('0')<<setw(2)<<dh<<":"<<setfill('0')<<setw(2)<<dm<<":"<<setfill('0')<<setw(2)<<ds;
    
    return 0;
    
}