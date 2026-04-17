#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = i; j < n; j++) {
            cout << " ";
        }

        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }

        // Move to next line
        cout << endl;
    }

    return 0;
}