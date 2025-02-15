#include<iostream>
using namespace std;
int multiply(int a ,int b)
{
    return a*b;
}
double multiply(int a,double b)
{
    return a*b;
}
float multiply(float a,float b,float c)
{
    return a*b*c;
}
int main()
{
    cout<<multiply(2,3)<<endl;
    cout<<multiply(2,3.3)<<endl;
    cout<<multiply(2.2f,3.2f,1.2f)<<endl;
    return 0;
}