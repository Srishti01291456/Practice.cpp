#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b;
    cout<<"before swapping the numbers are "<<a<<"and"<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<"after swapping the numbers are "<<a<<"and"<<b<<endl;
    return 0;
}