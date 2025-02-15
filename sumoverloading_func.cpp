#include<iostream>
using namespace std;
int sum(int a,int b)
{
    return a+b;
}
double sum(double c,double d,double e)
{
    return c+d+e;
}
float sum(int x,float y)
{
    return x+y;
}
int main()
{
    cout<<sum(4,5)<<endl;
    cout<<sum(9.7856768906,3.2,10.2)<<endl;
    cout<<sum(5,1.2f)<<endl;
    return 0;
}