#include<iostream>
using namespace std;
int nFibonacciNum(int n)
{
    if(n<=1)
    return n;
    else
    return nFibonacciNum(n-1)+nFibonacciNum(n-2);
}
int main()
{
    int a;
    cout<<"Enter a number:"<<endl;
    cin>>a;
    cout << "Fibonacci(" << a << ") = " << nFibonacciNum(a) << endl;
}