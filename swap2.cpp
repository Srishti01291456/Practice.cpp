#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the numbers u want to swap"<<endl;
    cin>>a;
    cin>>b;
    cout<<"before swapping a is"<<a<<"and b is"<<b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swapping a is"<<a<<"and b is"<<b;
    return 0;
}