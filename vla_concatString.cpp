#include<iostream>
#include<cstdarg>
#include<string>
using namespace std;
void concatStrings(int count,...)
{
    va_list args;
    va_start(args,count);
    string result="";
    int i;
    for(i=0;i<count;i++)
    {
        const char*str=va_arg(args,const char*);
        result+=str;
    }
    va_end(args);
    cout<<"The concatenated String:"<<result<<endl;
}
int main()
{
    concatStrings(3,"Hello,","World!","GOOD");
    return 0;
}