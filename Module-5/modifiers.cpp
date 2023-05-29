#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a="Bilkis";
    string b="dalia";
    a+=b;
    cout<<a<<endl;
    a="Bilkisdalia";//works
    cout<<a<<endl;
    a=a+b;//works
    cout<<a<<endl;
    a.push_back('a');
    a.pop_back();
    cout<<a<<endl;

    a="hi";
    cout<<a<<endl;
    a.assign("hello");
    cout<<a<<endl;

    string c="iloveme";
    c.erase(3,2);
    cout<<c<<endl;

    string d="dalia";
    d.replace(2,0,"li");
    cout<<d<<endl;
    string e="dalia";
    e.insert(2,"bilkis");
    cout<<e<<endl;
    return 0;
}