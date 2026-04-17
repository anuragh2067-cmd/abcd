#include <iostream>
using namespace std;

class Time{
public:
    int hr, min;
    void getTime() {
        cin >> hr >> min;
    }
    void addTime(Time t1, Time t2) {
        min = t1.min + t2.min;
        hr = t1.hr + t2.hr + (min / 60);
        min = min % 60;
    }
    void showTime() {
        cout << hr << " Hours " << min << " Minutes";
    }};
int main() {
    Time t1, t2, t3;
    cout << "Enter time 1 in hrs and minutes : ";
    t1.getTime();
    cout << "Enter time 2 in hrs and minutes: ";
    t2.getTime();
    t3.addTime(t1, t2);
    t3.showTime();
    return 0;
}



