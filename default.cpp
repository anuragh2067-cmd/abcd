#include <iostream>
using namespace std;

int sum(int a = 25,int b = -25){
    int c;
    c=a+b;
    return c;
}

int main() {
    int x,y;

    cout <<"enter the first number for summation : ";
    cin >> x;
    cout <<"\nenter the second number for summation : ";
    cin >> y;
    cout << "\nThe sum = " << sum(x,y);
    return 0;
}