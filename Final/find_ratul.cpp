#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    stringstream ss(a);
    string w;
    int cnt=0;
    while(ss>>w)
    {
        if(w=="Ratul")
        {
            cnt++;
        }
    }
    
    if(cnt>0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}                                                    