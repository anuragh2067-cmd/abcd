//Anurag Hindoliya
//BTCS25O1021
#include <iostream>
using namespace std;
int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int brr[3][3] = {{9,8,7},{6,5,4},{3,2,1}};
    int num[3][3];

    cout << "the first matrix is \n";
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << arr[i][j];
            cout <<" ";
        }
        cout <<endl;
    }
    cout << "\nthe second matrix is \n";
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << brr[i][j];
            cout <<" ";
        }
        cout <<endl;
    }
    cout << "\n""The matrix after the multiplication"
         << endl;
         
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            num[i][j] = arr[i][j] * brr[i][j];
            cout << num[i][j];
            cout << " ";
        }
     cout <<endl;
    }
    return 0;
}