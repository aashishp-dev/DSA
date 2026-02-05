#include <iostream>
using namespace std;

int main() {

    int matrix[3][3];

    cout << "Enter 9 numbers for the matrix:" << endl;

    for (int i = 0; i < 3; i++) {
       
        for (int j = 0; j < 3; j++) {
            cout << "Enter element at [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    cout << "\nYour 3x3 Matrix is:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
    
            cout << matrix[i][j] << "\t";
        }
        
        cout << endl; 
    }

    return 0;
}