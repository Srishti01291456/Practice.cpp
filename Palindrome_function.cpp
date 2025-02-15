#include<iostream>
using namespace std;
bool isPalindrome(int n)
{
    if(n<0)
    return false;
    int org=n,rev=0;
    while(n>0)
    {
        int digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    return org==rev;
}
int main()
{
    int a;
    cout<<"Enter a number:"<<endl;
    cin>>a;
    if(isPalindrome(a))
    cout<<"Yes"<<endl<<a<<endl;
    else
    cout<<"No"<<endl<<a<<endl;
    return 0;
}