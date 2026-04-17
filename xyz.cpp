#include <iostream>
using namespace std;

class Student {
    int roll;
    char name[20];
public:
    void input() {
        cin >> roll >> name;
    }
    void display() {
        cout << roll << " " << name;
    }
};

int main() {
    Student t;
    t.input();
    t.display();
    return 0;
}