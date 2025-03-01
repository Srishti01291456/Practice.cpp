#include <iostream>
using namespace std;
int main() 
{
    int num, count = 0;
    cout << "Enter an integer: ";
    cin >> num;
    while (num) {
        count += num & 1;  // Check if the last bit is 1
        num >>= 1;         // Right shift to check the next bit
    }
    cout << "Number of 1 bits: " << count << endl;
    return 0;
}
