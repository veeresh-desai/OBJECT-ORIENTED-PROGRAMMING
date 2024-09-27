// You are using GCC
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int born;

public:
    Student() {
        // Type your code here
        cout<<"Name: XYZ"<<endl;
        cout<<"Year born: 2023"<<endl;
    }

    Student(string initName, int initBorn) {
       
       this->name=initName;
       this->born=initBorn;
    }

    ~Student() {
        // Type your code here
        cout<<"Destroyed object: "<<name;
    }

    void setName(string s) {
        name = s;
    }

    void setBorn(int b) {
        born = b;
    }

    void printInfo() {
        cout<<"Name: "<<name<<endl;
        cout<<"Year born: "<<born<<endl;
    }

private:
    void clearName() {
        name.clear(); 
    }
};

int main() {
    string sname;
    int year;

    Student s1;
    cin >> sname >> year;
    s1.setName(sname);
    s1.setBorn(year);
    s1.printInfo();

    return 0;
}
