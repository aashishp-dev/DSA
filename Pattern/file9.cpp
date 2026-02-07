#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= i; j++) {
            // (i + j) even → 1, odd → 0
            if ((i + j) % 2 == 0)
                cout << "1";
            else
                cout << "0";
        }
        cout << endl;
    }

    return 0;
}
