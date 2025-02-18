#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string village;
    cin>>village;
    int i;
    for(i=0;i<n-1;i++)
    if(village[i]=='H' && village[i+1]=='H') 
    {
        cout<<"No"<<endl;
        return 0;
    }
    for(i=0;i<n;i++)
    if(village[i]=='.')
    village[i]='B';
    cout << "YES\n" << village << endl;
    return 0;
}
