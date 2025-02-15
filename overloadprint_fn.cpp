#include<iostream>
using namespace std;
void print(string str)
{
    cout<<"enter a string:"<<str<<endl;  
}
void print(int n)
{
    cout<<"enter a number:"<<n<<endl;
}
void print(string stri,int num)
{
    cout<<"enter a string:"<<stri<<endl;
    cout<<"enter a number:"<<num<<endl;
}
int main()
{  
    print("hello world!");
    print(23);
    print("hi",45);
    return 0;
}