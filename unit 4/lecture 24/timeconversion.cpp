#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes, seconds;

public:
    Time(int totalSeconds) {
        hours = totalSeconds / 3600;
        totalSeconds %= 3600;
        minutes = totalSeconds / 60;
        seconds = totalSeconds % 60;
    }

    void display() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
};

int main() {
    int totalSeconds;
    cin >> totalSeconds;

    Time t(totalSeconds);
    t.display();

    return 0;
}