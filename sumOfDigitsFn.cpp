#include<iostream>
using namespace std;
int sumOfDigits(int n)
{
    int res=0,rem;
    while(n>0)
    {
    rem=n%10;
    res=res+rem;
    n=n/10;
    }
    return res;
}
int main()
{
    int x,a;
    cout<<"Enter a number:"<<endl;
    cin>>a;
    x=sumOfDigits(a);
    cout<<"The sum of the digits are:"<<x<<endl;
}