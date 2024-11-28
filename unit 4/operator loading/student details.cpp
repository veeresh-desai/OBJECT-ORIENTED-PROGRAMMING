#include <iostream>
using namespace std;

class Student {
    string name;
    int rollno;
    string section;
    int sem;
public:

    Student() : name(""), rollno(0), section(""), sem(0) {}

    friend istream& operator>>(istream& in, Student& s) {
        
        in >> s.name;
       
        in >> s.rollno;
        
        in >> s.section;
       
        in >> s.sem;
        
        return in;
    }

    friend ostream& operator<<(ostream& out, const Student& s) {
        out << "Name: " << s.name << "\n";
        out << "Roll No: " << s.rollno << "\n";
        out << "Section: " << s.section << "\n";
        out << "Semester: " << s.sem << "\n";
        return out;
    }
};

int main() {
    Student s1;
    
    cin >> s1; 
    cout << s1; 
    
    return 0;
}
