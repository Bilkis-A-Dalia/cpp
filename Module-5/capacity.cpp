#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a="dalia";
    cout<<a.size()<<endl;
    cout<<a.max_size()<<endl<<endl;

    string b="asdfghjklqwertyuiopzxcvbnm";
    cout<<b.capacity()<<endl;//dynamic size

    string c="Bilkis";
    cout<<c<<endl;
    c.clear();
    cout<<c<<endl<<endl;

    string d="Akter";
    if(d.empty()==true)cout<<"empty"<<endl;
    cout<<"not empty"<<endl;

    string s;
    cin>>s;
    cout<<s<<endl;
    s.resize(6);
    cout<<s<<endl;
    s.resize(12,'x');
    cout<<s<<endl;
    s.resize(20,'x');
    cout<<s<<endl;
    return 0;
}