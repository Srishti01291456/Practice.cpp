#include<iostream>
using namespace std;
int factorial(int n)
{
    int factorial=1,i;
    for(i=n;i>0;i--)
    {
    factorial*=i;
    }
    return factorial;
}
int main()
{
    int a,b;
    cout<<"Enter a number whose factorial we need to find:"<<endl;
    cin>>a;
    b=factorial(a);
    cout<<"The factorial is :"<<b<<endl;
}