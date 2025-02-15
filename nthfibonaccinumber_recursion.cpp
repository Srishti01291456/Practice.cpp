#include<iostream>
using namespace std;
int nthfibonaccinumber(int n)
{
    if(n<=1)
    return n;
    else
    return nthfibonaccinumber(n-1)+nthfibonaccinumber(n-2);
}
int main()
{
    int a;
    cout<<"Enter a number:"<<endl;
    cin>>a;
    cout<<"The nth fibonacci number is:"<<nthfibonaccinumber(a)<<endl;
    return 0;
}