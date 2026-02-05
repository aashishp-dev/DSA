#include <iostream>
using namespace std;

int main() {
    string name;
    int year;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter year of study: ";
    cin >> year;

    cout << "My name is " << name
         << " and I am currently a "
         << year << " year student.";

    return 0;
}
