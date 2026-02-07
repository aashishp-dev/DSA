#include <iostream>
using namespace std;

int main() {
    int rows = 5; 

    
    for(int i = 0; i < rows; i++) {
        
        for(int j = 0; j < rows - i; j++) {
            cout << "*";
        }

    
        for(int j = 0; j < i * 2; j++) {
            cout << " ";
        }

    
        for(int j = 0; j < rows - i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    
    for(int i = 2; i <= rows; i++) {
        
        for(int j = 0; j <= i - 1; j++) {
            cout << "*";
        }

        for(int j = 0; j < (rows - i) * 2; j++) {
            cout << " ";
        }

        for(int j = 0; j <= i - 1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
