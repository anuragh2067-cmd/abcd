// Anurag Hindoliya
// BTCS25O1021
#include <iostream>
using namespace std;
int main(){
    int arr[2][2] = {{1, 2},{3, 4}};
    int brr[2][2] = {{5, 6},{7, 8}};
    int num[2][2];
    cout << "the first matrix is \n";
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){

            cout << arr[i][j];
            cout <<" ";
        }
        cout <<endl;
    }
    cout << "\nthe second matrix is \n";
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){

            cout << brr[i][j];
            cout <<" ";
        }
        cout <<endl;
    }
    cout << "\nThe matrix after the multiplication"<< endl;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){

            num[i][j] = arr[i][j] * brr[i][j];

            cout << num[i][j];
            cout << " ";
        }
     cout <<endl;
    }
    return 0;
}