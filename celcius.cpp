#include <iostream>

using namespace std;
int main(){

    int x,y;
    cout << "Enter the temperature in fahereniet :";
    cin >> x;

    y = (x-32)*5/9;

    cout << "the temperatue in degree celcius :" <<y;

    return 0;

}