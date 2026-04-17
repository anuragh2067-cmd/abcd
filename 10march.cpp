//Anurag Hindoliya 
//BTCS25O1021

#include <iostream>
using namespace std;

class Calculator {
public:
    // Overloaded function for 2 numbers
    int sum(int a, int b) {
       int c;
       c = a + b;
       return c;
    }

    // Overloaded function for 3 numbers
    int sum(int a, int b, int c) {
        int d;
        d = a + b + c;
        return d;
    }
};

int main() {
    Calculator obj;
    cout << "Sum of 10 and 20: " << obj.sum(10, 20) << endl;
    cout << "Sum of 10, 20 and 30: " << obj.sum(10, 20, 30) << endl;
    return 0;
}