#include <iostream>
using namespace std;

int main() {
    int a[3][3];
    int sum;

    cout << "Enter elements of 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    for (int j = 0; j < 3; j++) {
        sum = 0;
        for (int i = 0; i < 3; i++) {
            sum = sum + a[i][j];
        }
        cout << "Sum of column " << j + 1 << " = " << sum << endl;
    }

    return 0;
}
