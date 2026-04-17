#include <iostream>
using namespace std;

class Point {
        int x, y;
public:
    Point(int a, int b) {
        x = a;
        y = b;
    }
    void display() {
        cout << "X coordinate = " << x << endl;
        cout << "Y coordinate = " << y << endl;
    }};

int main() {
int s,p;

cout << "Enter the coordinates of the point : ";
cin >> s >> p;
Point obj(s,p);
obj.display();
return 0;
}