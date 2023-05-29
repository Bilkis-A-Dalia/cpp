#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    stringstream ss(a);
    string w;
    int cnt=0;
    while(ss >>w )
    {
        cout<<w<<endl;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}