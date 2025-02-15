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
    int a,b,x;
    cout<<"enter two integers:"<<endl;
    cin>>a;
    cin>>b;
    x=gcd(a,b);
    cout<<"gcd is:"<<x<<endl;
    return 0;
}