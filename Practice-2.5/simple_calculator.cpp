#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y,sum,mul,sub;
    cin>>x>>y;
    sum=x+y;
    mul=x*y;
    sub=x-y;
    cout<<x<<" + "<<y<<" = "<<sum<<endl;
    cout<<x<<" * "<<y<<" = "<<mul<<endl;
    cout<<x<<" - "<<y<<" = "<<sub<<endl;
    return 0;
}