#include<bits/stdc++.h>
using namespace std;
void print(stringstream& ss)
{
    string w;
    if(ss>>w)
    {
        // cout<<w<<endl;
        print(ss);
        cout<<w<<endl;
    }
}
int main()
{
    string a;
    getline(cin,a);
    stringstream ss(a);
    print(ss);
    return 0;
}