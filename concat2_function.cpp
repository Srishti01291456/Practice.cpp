#include<iostream>
#include<string>
using namespace std;
string concat(int num,string str)
{
    return to_string(num)+str; //type casting?
}
int main()
{
    string s1,x;
    int a;
    cout<<"enter a string:"<<endl;
    cin>>s1;
    cout<<"enter an integer:"<<endl;
    cin>>a;
    x=concat(a,s1);
    cout<<"The onerall string is: "<<x<<endl;
    return 0;
}