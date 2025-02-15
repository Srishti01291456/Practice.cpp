#include<iostream>
#include<string>
using namespace std;
string concat(string str1,string str2)
{
    return str1+str2;
}
int main()
{
    string s1,s2,x;
    cout<<"enter two strings:"<<endl;
    cin>>s1;
    cin>>s2;
    x=concat(s1,s2);
    cout<<"the concated string is: "<<x<<endl;
    return 0;
}