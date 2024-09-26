#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<"Student Details:"<<endl;
    for(int i=0;i<n;i++){
        cin.ignore();
        string name;
        getline(cin,name);
        cout<<"Name: "<<name<<endl;
        int s;
        cin>>s;
        float arr[s];
        float sum=0.0;
        for(int j=0;j<s;j++){
            cin>>arr[j];
            sum+=arr[j];
            
        }
        sum=sum/s;
        
        cout<<"Average marks: "<<fixed<<setprecision(2)<<sum<<endl;
        
    }
}