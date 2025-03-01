#include<iostream>
using namespace std;
int main()
{
    string fname;
    int age;
    int days_lived;
    cin>>fname>>age;
    days_lived=age*365;
    cout<<"your name is"<< fname<<"and you lived"<< days_lived<<"days"<<endl;
    return 0;
}