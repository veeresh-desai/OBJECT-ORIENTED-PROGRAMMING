// You are using GCC
#include <iostream>
using namespace std;

class Rectangle {
protected:
    double width;
    double length;
public:
    Rectangle(double w, double l) : width(w), length(l) {}
   
    
    double getArea() {
        return width * length;
    }
    
    double getWidth() {
        return width;
    }
    
    double getLength() {
        return length;
    }
};

class Cube : public Rectangle {
private:
    double height;
public:
    Cube(double w, double l, double h) : Rectangle(w, l), height(h) {}
    
    double getVolume() {
        return width * length * height;
    }
    
    double getHeight() {
        return height;
    }
};

int main() {
    double cubeWidth, cubeLength, cubeHeight;
    cin >> cubeWidth >> cubeLength >> cubeHeight;
    
    Cube myCube(cubeWidth, cubeLength, cubeHeight);
    
    cout << "Width: " << myCube.getWidth() << endl;
    cout << "Length: " << myCube.getLength() << endl;
    cout << "Height: " << myCube.getHeight() << endl;
    cout << "Base Area: " << myCube.getArea() << endl;
    cout << "Volume: " << myCube.getVolume() << endl;
    
}    