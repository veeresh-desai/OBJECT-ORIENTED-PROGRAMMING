// You are using GCC
#include <iostream>
#include <fstream>
using namespace std;

struct Data {
    int n; 
};

int main() {
    Data data;
    cin >> data.n;

    if (data.n > 1000) {
        cout << "Exceeding Limit!" << endl;
        return 0;
    }

    ofstream outFile("tables.txt");

    if (outFile.is_open()) {
        for (int i = 1; i <= 10; ++i) {
            //Enter the missing code
            outFile<<i<<"X "<<data.n<<" = "<<data.n*i<<endl;
        }

        outFile.close();
    }

    ifstream inFile("tables.txt");

    if (inFile.is_open()) {
        string line;
        //Enter the missing code
        while(getline(inFile,line)){
            cout<<line<<endl;
        }
        inFile.close();
    }
    
    return 0;
}