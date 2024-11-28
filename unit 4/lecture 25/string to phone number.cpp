#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class PhoneNumber {
private:
    string number;

public:
    PhoneNumber(string num) : number(num) {}

    operator string() {
        string numeric = "";
        for (int i = 0; i < number.size(); i++) {
            char c = number[i];
            if (isdigit(c)) {
                numeric += c;
            } else if (isalpha(c)) {
                c = toupper(c);
                switch (c) {
                    case 'A': case 'B': case 'C': numeric += '2'; break;
                    case 'D': case 'E': case 'F': numeric += '3'; break;
                    case 'G': case 'H': case 'I': numeric += '4'; break;
                    case 'J': case 'K': case 'L': numeric += '5'; break;
                    case 'M': case 'N': case 'O': numeric += '6'; break;
                    case 'P': case 'Q': case 'R': case 'S': numeric += '7'; break;
                    case 'T': case 'U': case 'V': numeric += '8'; break;
                    case 'W': case 'X': case 'Y': case 'Z': numeric += '9'; break;
                }
            }
        }
        return numeric;
    }
};

int main() {
    string inputNumber;
    getline(cin, inputNumber);

    PhoneNumber phoneNumber(inputNumber);
    string numericRepresentation = phoneNumber;

    cout << numericRepresentation << endl;

    return 0;
}
