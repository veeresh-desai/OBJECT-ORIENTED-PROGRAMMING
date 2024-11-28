#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes, seconds;

public:
    Time(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}

    void display() const {
        cout << hours << " h " << minutes << " m " << seconds << " s" << endl;
    }

    Time operator-(const Time& t) const {
        int totalSec1 = hours * 3600 + minutes * 60 + seconds;
        int totalSec2 = t.hours * 3600 + t.minutes * 60 + t.seconds;
        int diff = abs(totalSec1 - totalSec2);
        
        int h = diff / 3600;
        diff %= 3600;
        int m = diff / 60;
        int s = diff % 60;

        return Time(h, m, s);
    }
};

int main() {
    int h1, m1, s1, h2, m2, s2;
    cin >> h1 >> m1 >> s1;
    cin >> h2 >> m2 >> s2;

    Time time1(h1, m1, s1);
    Time time2(h2, m2, s2);

    cout << "Time 1: ";
    time1.display();
    cout << "Time 2: ";
    time2.display();

    Time diff = time1 - time2;
    cout << "Time difference: ";
    diff.display();

    return 0;
}
