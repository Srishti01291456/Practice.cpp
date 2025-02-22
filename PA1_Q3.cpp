#include<iostream>
using namespace std;
int main()
{
    int a,b,res;
    cin>>a;
    cin>>b;
    char op;
    cin>>op;
    switch(op)
    {
        case '+':
            res=a+b;
            break;
        case '-':
            res=a-b;
            break;
        case '*':
            res=a*b;
            break;
        case '/':
            if(b!=0)
            res=a/b;
            else
            cout<<"Not defined"<<endl;
            break;
        default:
            cout<<"Invalid operator"<<endl;
            return 1;
    }
    cout<<res<<endl;
    return 0;
}