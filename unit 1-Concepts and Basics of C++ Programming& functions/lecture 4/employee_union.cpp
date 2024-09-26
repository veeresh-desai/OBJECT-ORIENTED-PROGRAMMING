// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;

union employee {
    int eid;
    char name[100];
    struct {
    int d1,m1,y1;
    }dob;
    struct {
    int d2,m2,y2;
    }doj;
    float salary;
    
};
int main() {
    employee e1;
    
    cin>>e1.eid;
    cout<<"ID : "<<e1.eid<<endl;
    
    cin>>e1.name;
    cout<<"Name : "<<e1.name<<endl;
    
    
    scanf("%d/%d/%d",&e1.dob.d1,&e1.dob.m1,&e1.dob.y1);
    cout<<"DOB : "<<setfill('0')<<setw(2)<<e1.dob.d1<<"/"<<setfill('0')<<setw(2)<<e1.dob.m1<<"/"<<e1.dob.y1<<endl;
    scanf("%d/%d/%d",&e1.doj.d2,&e1.doj.m2,&e1.doj.y2);
    cout<<"DOJ : "<<setfill('0')<<setw(2)<<e1.doj.d2<<"/"<<setfill('0')<<setw(2)<<e1.doj.m2<<"/"<<e1.doj.y2<<endl;
    cin>>e1.salary;
    cout<<fixed<<setprecision(1)<<"Salary : "<<e1.salary;
}