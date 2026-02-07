#include <iostream>
using namespace std;

int main() {
    int rows = 4;

    for(int i = 1; i <= rows; i++) {
       
        for(int space = 1; space <= rows - i; space++) {
            cout << " ";
        }

    
        char ch = 'A';
        for(int j = 1; j <= i; j++) {
            cout << ch;
            ch++;
        }

        ch -= 2; 
        for(int j = 1; j <= i - 1; j++) {
            cout << ch;
            ch--;
        }

        cout << endl;
    }

    return 0;
}
