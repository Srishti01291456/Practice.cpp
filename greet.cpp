#include<iostream>
using namespace std;
void greet()
{
    cout<<"Hello!"<<endl;
}
void greet(string str)
{
    cout<<"Enter a string:"<<str<<endl;
    
}
void greet(string str,int age)
{
    cout<<"Enter a string:"<<str<<endl;
    cout<<"enter your age:"<<age<<endl;
}
int main()
{
    greet("Hello!");
    greet("Hello,[Srishti]!");
    greet("Hello,[Srishti],You are[18] years old.");
}