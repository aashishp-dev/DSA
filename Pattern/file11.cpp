#include <iostream>
using namespace std;

int main() {
    int rows = 4;

    for(int i = 1; i <= rows; i++) {

        
        for(int j = 1; j <= i; j++) {
            cout << j;
        }

        for(int space = 1; space <= 2 * (rows - i); space++) {
            cout << " ";
        }

        for(int j = i; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}
