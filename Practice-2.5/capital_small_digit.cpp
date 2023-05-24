#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin>>a;
    if(a>='0' && a<='9')
    {
        cout<<"IS DIGIT\n";
    }
    else
    {
        cout<<"ALPHA\n";
        if(a>='a' && a<='z')
        {
            cout<<"IS SMALL\n";
        }
        else
        {
            cout<<"IS CAPITAL";
        }
    }
    return 0;
}