#include <bits/stdc++.h>

using namespace std;

template <typename T>
class Statistics {
private:
    vector<T> data;
    int n;

public:
    Statistics(int size) : n(size) {
        data.resize(n);
    }

    void inputData() {
        for (int i = 0; i < n; ++i) {
            cin >> data[i];
        }
    }

    double calculateMean() {
        double sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += data[i];
        }
        return sum / n;
    }

    double calculateStandardDeviation() {
        double mean = calculateMean();
        double variance = 0;
        for (int i = 0; i < n; ++i) {
            variance += pow(data[i] - mean, 2);
        }
        variance /= n;
        return sqrt(variance);
    }

    void displayStandardDeviation() {
        cout << fixed << setprecision(2) << calculateStandardDeviation() << endl;
    }
};

int main() {
    int n;
    cin >> n;

    Statistics<int> stats(n);
    stats.inputData();
    stats.displayStandardDeviation();

    return 0;
}
