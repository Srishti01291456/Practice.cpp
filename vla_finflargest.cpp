#include<iostream>
#include<cstdarg>
using namespace std;
int findLargest(int count,...)
{
    va_list args;
    va_start(args,count);
    int largest=va_arg(args,int);
    for(int i=1;i<count;i++)
    {
        int num=va_arg(args,int);
        if(num>largest)
        {
            largest=num;
        }
    }
    va_end(args);
    return largest;
}
int main()
{
    cout<<"largest: "<<findLargest(3,1,2,5)<<endl;
    return 0;
}