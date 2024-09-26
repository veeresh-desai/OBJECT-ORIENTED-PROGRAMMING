// You are using GCC
#include<iostream>
#include<iomanip>

using namespace std;


double calculateTotalPrice(double price){
    cout<<fixed<<setprecision(2)<<price<<endl;
    
    return 0;
    
}

double calculateTotalPrice(double price,int quantity){
    cout<<fixed<<setprecision(2)<<price*quantity<<endl;
    
    return 0;
}

double calculateTotalPrice(double price,int quantity,double discount){
    cout<<fixed<<setprecision(2)<<(price*quantity)*(100-discount)/100<<endl;
    
    return 0;
    
}


int main(){
    int choice;
    for(int i=0;i<7;i++){
        cin>>choice;
    
    double price;
    int quantity;
    double discount;
    
    if(choice==1){
        
        cin>>price;
        calculateTotalPrice(price);
        
        
    }
    if(choice==2){
        cin>>price;
        cin>>quantity;
        calculateTotalPrice(price,quantity);
    }
    
    if(choice==3){
        cin>>price;
        cin>>quantity;
        cin>>discount;
        calculateTotalPrice(price,quantity,discount);
    }
    
    if(choice==4){
        break;
    }
    
    if(choice>4){
        cout<<"Invalid";
    }
    
    }
}