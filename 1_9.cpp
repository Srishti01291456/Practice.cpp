#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a;
    char c;
    float f;
    cin>>a>>c>>f;
    cout<<"\n FORMATTED TABLE \n"<<endl;
    cout<<"|Integer       |Character          |Float         |\n"<<endl;
    cout << "| " << setw(13) << a << " | " << setw(13) << c << " | " << setw(13) << fixed << setprecision(2) << f<< " |\n";
    return 0;
}