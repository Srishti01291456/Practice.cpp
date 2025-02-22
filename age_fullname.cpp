#include<iostream>
#include<string>
using namespace std;
int main()
{
    string fullName;
    int age,days_lived;
    cin.ignore();
    getline(cin, fullName);
    cin>>age;
    days_lived=age*365;
    cout<<"your name is"<<fullName<<"and u have lived "<<days_lived<<"days"<<endl;
    return 0;
}