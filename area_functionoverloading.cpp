#include<iostream>
using namespace std;
int area(int side)
{
    return side*side;
}
int area(int l,int b)
{
    return l*b;
}
int main()
{
    int a,b,x;
    cout<<"give values"<<endl;
    cin>>a>>b;
    x=area(a,b);
    cout<<x<<endl;
}