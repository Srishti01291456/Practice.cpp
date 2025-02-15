#include<iostream>
using namespace std;
int maxNumber(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}
int main()
{
    int a,b,c;
    cout<<"Enter two integers"<<endl;
    cin>>a>>b;
    c=maxNumber(a,b);
    cout<<"The max number is:"<<c<<endl;
}

