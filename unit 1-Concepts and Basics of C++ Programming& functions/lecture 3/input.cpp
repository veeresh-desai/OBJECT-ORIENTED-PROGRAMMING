#include<iostream>
using namespace std;

class Input{
    public:
    void print(string name,int rollno){
        cout<<rollno<<": "<<name;
    }
};

int main(){
    string name;
    int rollno;
    cin>>name>>rollno;
    
    Input student;
    student.print(name,rollno);
}