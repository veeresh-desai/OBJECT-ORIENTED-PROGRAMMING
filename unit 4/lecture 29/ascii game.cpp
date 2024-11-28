#include <iostream>
using namespace std;

class Base {
public:
    virtual int game(char a, char b) = 0; // Pure virtual method
};

class Derive : public Base {
public:
    int game(char a, char b) override {
        int score = 0;
        // Check the first character
        if (isupper(a)) {
            score += 10;
        } else {
            score -= 5;
        }
        // Check the second character
        if (isupper(b)) {
            score += 10;
        } else {
            score -= 5;
        }
        return score;
    }
};

int main() {
    char a, b;
    cin >> a >> b;

    Derive obj;
    int result = obj.game(a, b);
    cout << "Score: " << result << endl;

    return 0;
}
