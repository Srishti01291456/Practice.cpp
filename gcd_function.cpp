#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
int main()
{
    int c,d,x;
    cout<<"enter two numbers"<<endl;
    cin>>c>>d;
    x=gcd(c,d);
    cout<<"gcd of two numbers:"<<x<<endl;
}