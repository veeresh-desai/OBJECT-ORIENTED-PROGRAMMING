#include <iostream>
#include <string>
using namespace std;

class Demo {
public:
    void separateCharacters(const string& input, string& alnum, string& nonAlnum) {
        for (char c : input) {
            if (isalnum(c)) {
                alnum += c;
            } else {
                nonAlnum += c;
            }
        }
    }
};

class Main : public Demo {
public:
    void processString() {
        string input;
        getline(cin, input);

        string alnum, nonAlnum;
        separateCharacters(input, alnum, nonAlnum);

        cout << alnum << nonAlnum << endl;
    }
};

int main() {
    Main obj;
    obj.processString();
    return 0;
}
