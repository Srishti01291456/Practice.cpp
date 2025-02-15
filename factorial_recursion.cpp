#include<iostream>
using namespace std;
long long factorial(int n)
{
    if(n==0||n==1)
    return 1;
    else
    return n*factorial(n-1);
}
int main()
{
    int num;
    cout<<"enter a number whose factorial we need to find"<<endl;
    cin>>num;
    if(num<0)
    {
        cout<<"factorial of the given number is not defined"<<endl;
    }
    else
    {
        cout<<"factorial of the given number is:"<<factorial(num)<<endl;
    }
    return 0;
}