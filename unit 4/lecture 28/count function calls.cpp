#include <iostream>
using namespace std;

class A {
public:
    void func(int& val) {
        val *= 2;
    }
};

class B {
public:
    void func(int& val) {
        val *= 3;
    }
};

class C {
public:
    void func(int& val) {
        val *= 5;
    }
};

class D : public A, public B, public C {
private:
    int val;
    int countA, countB, countC;

public:
    D() : val(1), countA(0), countB(0), countC(0) {}

    void update_val(int new_val) {
        while (new_val % 2 == 0) {
            A::func(val);
            new_val /= 2;
            countA++;
        }
        while (new_val % 3 == 0) {
            B::func(val);
            new_val /= 3;
            countB++;
        }
        while (new_val % 5 == 0) {
            C::func(val);
            new_val /= 5;
            countC++;
        }
    }

    void display() {
        cout << "Value = " << val << endl;
        cout << "A's func called " << countA << " times" << endl;
        cout << "B's func called " << countB << " times" << endl;
        cout << "C's func called " << countC << " times" << endl;
    }
};

int main() {
    int new_val;
    cin >> new_val;

    D obj;
    obj.update_val(new_val);
    obj.display();

    return 0;
}
