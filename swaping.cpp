#include <iostream>

using namespace std;

class swaping{

    public:
    void swap(int x,int y){

        x = x + y;
        y = y - x;
        x = x - y;
        
}};
int main(){
int a;
int b;

cout <<"Enter the first number :";
cin >> a;

cout <<"\nEnter ther second number :";
cin >> b;

swap(a,b);

cout << "\nAfter swaping the numbers";
cout << "\nThe first number is : " << a;
cout <<"\nThe second number is : " << b;

return 0;
}