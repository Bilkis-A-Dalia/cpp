#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int b,max=0;
    for(int i=1;i<=a;i++)
    {
        cin>>b;
        if(b>max)
        {
            max=b;
        }
    }
    cout<<max;
    return 0;
}