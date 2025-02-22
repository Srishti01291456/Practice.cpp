#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the numbers u want to swap"<<endl;
    cin>>a>>b;
    cout<<"before swapping a is"<<a<<"and b is"<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<"after swapping a is"<<a<<"and b is"<<b<<endl;
    return 0;
}
