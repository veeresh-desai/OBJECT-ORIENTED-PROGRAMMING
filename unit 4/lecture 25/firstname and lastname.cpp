#include <iostream>
#include <string>
using namespace std;

class FullName {
private:
    string firstName;
    string lastName;

public:
    FullName(string fName, string lName) : firstName(fName), lastName(lName) {}

    operator string() const {
        return firstName + " " + lastName;
    }
};

int main() {
    string firstName;
    string lastName;
    
    getline(cin, firstName); // Read first name (can handle multiple-word names)
    getline(cin, lastName);  // Read last name (can handle multiple-word names)

    FullName fullName(firstName, lastName);
    string fullNameStr = fullName;

    cout << fullNameStr << endl;

    return 0;
}
