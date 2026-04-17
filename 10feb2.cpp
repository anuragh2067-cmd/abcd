#include <iostream>
using namespace std;

class perimeter{
    int x,y;

    public:
    perimeter(int a=10,int b=20){
x=a;
y=b;
    }
    void display(){
cout << "the lenth : " << x << endl;
cout << "the width : " << y << endl;
 }
 };

 int main(){

    perimeter p1(33,30);
    p1.display();

    cout << "\nthe default constructor is called -" << endl;
    perimeter p2;
    p2.display();
    
    return 0;
 }
