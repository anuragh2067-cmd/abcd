//Anurag Hindoliya
//BTCS25O1021
#include <iostream>
#include <cmath>
using namespace std;

class Geometry {
public:

    void calculate(int n) {

        int result = (n * (n + 1) * (2 * n + 1)) / 6;
        cout << "Sum of squares of first " << n << " numbers: " << result << endl;
    }

    void calculate(double side) {

        cout << "Area of Square: " << side * side << endl;
    }

    void calculate(float radius) {

        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }

    void calculate(double length, double breadth) {

        cout << "Area of Rectangle: " << length * breadth << endl;
    }
};

int main() {
    Geometry geo;
    
    geo.calculate(5);            // Calls sum of squares
    geo.calculate(4.5f);          // Calls area of square
    geo.calculate(3.0);         // Calls area of circle
    geo.calculate(10.0, 5.0);    // Calls area of rectangle
    
    return 0;
}