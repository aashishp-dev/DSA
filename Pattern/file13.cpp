#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for(int i = 1; i <= rows; i++) {
        char c = 'A'; 
        for(int j = 1; j <= i; j++) {
            cout << c << " ";
            c++; 
        }
        cout << endl;
    }

    return 0;
}
