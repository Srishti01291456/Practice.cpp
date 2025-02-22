#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char a;
    int n;
    float f;
    cin>>a;
    cin>>n;
    cin>>f;
    cout<<"\nFORMATTED OUTPUT:\n"<<endl;
    cout << "| Character     | Integer        | Float          |\n";
    cout << "| " << setw(13) << a << " | " << setw(13) << n << " | " << setw(13) << fixed << setprecision(2) << f<< " |\n";
    return 0;
}
