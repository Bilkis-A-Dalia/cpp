#include<bits/stdc++.h>
using namespace std;
namespace bilkis
{
    int age=23;
    void hello()
    {
        cout<<"bilkis namespace"<<endl;
    }
}
namespace zhao
{
    int age2=23;
    void hello2()
    {
        cout<<"zhao namespace"<<endl;
    }
}
using namespace bilkis;
int main()
{
    cout<<age<<endl;
    hello();
    zhao::hello2();
    return 0;
}