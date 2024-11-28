// You are using GCC
#include <iostream>
using namespace std;

class Numbers {
public:
    int value;
    
    Numbers(int v) : value(v) {}
    
    Numbers operator-() {
        return Numbers(-value);
    }
};

int main() {
    int x, y;
    cin >> x >> y;
    
    Numbers num1(x);
    Numbers num2(y);
    
    Numbers negNum1 = -num1;
    Numbers negNum2 = -num2;
    
    int addition = negNum1.value + negNum2.value;
    int subtraction = negNum1.value - negNum2.value;
    
    cout << addition << " " << subtraction << endl;

    return 0;
}