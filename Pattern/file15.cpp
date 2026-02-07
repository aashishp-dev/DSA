#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    char lastChar = 'E'; 

    for(int i = 0; i < rows; i++) {
        char ch = lastChar - i; 
        for(int j = 0; j <= i; j++) {
            cout << ch << " ";
            ch++; 
        }
        cout << endl;
    }

    return 0;
}
