#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float p,r,t,amt,ci;
    cin>>p;
    cin>>r;
    cin>>t;
    ci=p*pow((1+r/100),t)-p;
    cout<<ci<<endl;
    return 0;
}