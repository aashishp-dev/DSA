#include <iostream>
using namespace std;

int main() {
    int mat[3][3];
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin >> mat[i][j];
    cout << "Diagonal elements: ";
    for(int i=0;i<3;i++)
        cout << mat[i][i] << " ";
    return 0;
}