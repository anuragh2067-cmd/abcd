#include <iostream>

using namespace std;

    int perimeter(int x,int y){ //function for perimeter of rectangle
       int s;
        s = 2*(x+y);
        
        return s;
        }

        int area(int x,int y){  //function for area of rectangle
        

            int s;

            s = x*y;

            return s;
        } 
int main(){

    int a,b,c,q;
 
    cout << "Enter the length of rectangle in cm : ";
    cin >> a;

    cout << "Enter the width of the rectangle in cm : ";
    cin >> b;

    q = perimeter(a,b);
    c = area(a,b);

    cout << "the perimter of rectangle : " <<q;

    cout << "\nthe area of the rectangle : " <<c;
    
    return 0;

}