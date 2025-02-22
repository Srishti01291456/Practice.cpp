#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double num1,num2;
    cin>>num1;
    cin>>num2;
    if(num2==0)
    {cout<<"Division is not possible"<<endl;
    return 1;}
    double res=num1/num2;
    cout<<fixed<<setprecision(2);
    cout<<res<<endl;
    return 0;
}