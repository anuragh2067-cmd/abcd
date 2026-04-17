//Anurag hindoliya
//BTCS25O1021 B1
#include <iostream>
using namespace std;

class Add{
    int a, b;
public:
    void set(int x, int y){
        a = x;
        b = y;
}
    friend int addition(Add obj);
};
int addition(Add obj) {
    return obj.a + obj.b;
}
int main() {
    Add obj;
    obj.set(27, -27);
    cout << "Sum = " << addition(obj);
    return 0;
}