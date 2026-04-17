#include <iostream>
using namespace std;
class area(){
    float w,x,y,z;
    public:
    area(float radius){
x=radius;
    }
area(float length,float breath){
    y=length;
    z=breath;
}
area(float side){
w=side;
}
void display(){
    cout << "The area of circle : " << 3.14*x*x << endl;
}
void dislay(){
    cout << "The area of rectangle : " << y*z << endl;
}
void display(){
    cout << "The area of square : " << w*w << endl;
}
};

int main(){

    area a1(7);
    a1.dislay();

    area a2(10,20);
    a2.display();

    are a3(20);
    a3.display():

    return 0;

}
