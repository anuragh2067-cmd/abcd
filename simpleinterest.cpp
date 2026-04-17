#include <iostream>

using namespace std;

    int interest(int x,int y, int z){ //function for calculating simple interest
       int s;
        s = (x*y*z)/100;
        
        return s;
        }

int main(){

    int a,b,c,q;
 
    cout << "Enter the principle amount :";
    cin >> a;

    cout << "Enter the rate of Interest :";
    cin >> b;

    cout << "Enter the time period in yrs :";
    cin >> c;

    q = interest(a,b,c);

    cout << "the Simple Interest is :" <<q;

    return 0;
}