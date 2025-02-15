#include<iostream>
using namespace std;
int reverseNumber(int n)
{
    int rev=0,rem;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return rev;
}
int main()
{
    int a,x;
    cout<<"enter a number"<<endl;
    cin>>a;
    x=reverseNumber(a);
    cout<<"The reversed number is:"<<x<<endl;
}
