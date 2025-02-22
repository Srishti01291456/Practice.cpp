#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName;
    int age, daysLived;

    cout << "Enter your full name: ";
    cin.ignore();
    getline(cin, fullName);
    cout << "Enter your age: ";
    cin >> age;

    daysLived = age * 365;

    cout << "Hello, " << fullName << "! You have lived approximately " << daysLived << " days." << endl;
    
    return 0;
}
