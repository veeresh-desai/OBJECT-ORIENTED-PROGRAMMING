// You are using GCC
#include<iostream>

using namespace std;

void checkint(void* ptr){
    int* n=(int*)ptr;
    
    if (*n > 0) {
        cout << "The number is positive" << endl;
    } else if (*n < 0) {
        cout << "The number is negative" << endl;
    } else {
        cout << "The number is zero" << endl;
    }
}

void checkchar(void* ptr){
    char* c=(char*)ptr;
    
    if(isalpha(*c)){
        cout<<"The character is an alphabet";
    }
    else if(isdigit(*c)){
        cout<<"The character is a number";
    }
    else{
        cout<<"The character is not a number or an alphabet";
    }
}



int main(){
    int n;
    cin>>n;
    char c;
    cin>>c;
    
    void* int_n=&n;
    void* char_c=&c;
    
    checkint(int_n);
    checkchar(char_c);
}