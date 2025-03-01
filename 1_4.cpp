#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,res;
    cin>>a>>b;
    if(b!=0)
    {res=a/b;
    cout<<fixed<<setprecision(2)<<endl;
    cout<<res<<endl;}
    else
    cout<<"result is not defined"<<endl;
    return 0;
}