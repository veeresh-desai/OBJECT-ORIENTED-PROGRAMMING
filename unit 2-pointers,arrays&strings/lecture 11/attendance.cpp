#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string name;
    int attendance;
    
    // Pointer to data members
    string Employee::*ptrToName = &Employee::name;
    int Employee::*ptrToAttendance = &Employee::attendance;
    
    void setDetails(string empName, int status) {
        this->*ptrToName = empName;
        this->*ptrToAttendance = status;
    }
    
    void displayAttendance() {
        cout << this->*ptrToName << ": ";
        if (this->*ptrToAttendance == 1) {
            cout << "Present" << endl;
        } else {
            cout << "Absent" << endl;
        }
    }
};

int main() {
    int MAX_EMPLOYEES;

    cin >> MAX_EMPLOYEES;

    Employee employees[MAX_EMPLOYEES];
    
    // Input employee details
    for (int i = 0; i < MAX_EMPLOYEES; ++i) {
        string name;
        int status;
        cin >> name >> status;
        employees[i].setDetails(name, status);
    }

    // Display attendance report
    cout << "Attendance Report:" << endl;
    for (int i = 0; i < MAX_EMPLOYEES; ++i) {
        employees[i].displayAttendance();
    }

    return 0;
}
