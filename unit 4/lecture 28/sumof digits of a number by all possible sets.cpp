#include <iostream>
#include <vector>
using namespace std;

class Parent {
protected:
    int num;

public:
    Parent(int n) : num(n) {}
};

class Child : public Parent {
public:
    Child(int n) : Parent(n) {}

    void fun() {
        vector<int> digits;
        int temp = num;

        while (temp > 0) {
            digits.push_back(temp % 10);
            temp /= 10;
        }

        int digitCount = digits.size();
        if (digitCount == 1) {
            cout << digits[0] << endl;
            return;
        }

        int sum = 0;
        for (int i = 0; i < digitCount - 1; i++) {
            for (int j = i + 1; j < digitCount; j++) {
                sum += (digits[i] + digits[j]);
            }
        }

        cout << sum << endl;
    }
};

int main() {
    int num;
    cin >> num;

    Child obj(num);
    obj.fun();

    return 0;
}
