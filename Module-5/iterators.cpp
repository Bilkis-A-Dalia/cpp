#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    cout<<*s.begin()<<endl;
    cout<<*(s.end()-1)<<endl;
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i]<<endl;
    }
    cout<<endl;

    string d;
    cin>>d;
    //string::iterator it;
    //for(string::iterator it=d.begin(); it<d.end(); it++)

    for(auto it=d.begin(); it<d.end(); it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}