#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"before swapping the numbers are "<<a<<"and"<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swapping the numbers are "<<a<<"and"<<b<<endl;
    return 0;
}