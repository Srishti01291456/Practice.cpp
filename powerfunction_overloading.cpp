#include<iostream>
#include<cmath>
using namespace std;
int power(int b,int e)
{
    return pow(b,e);
}
double power(double b,int e)
{
    return pow(b,e);
}
int main()
{
    cout<<pow(2,3)<<endl;
    cout<<pow(3.145,2)<<endl;
    return 0;
}