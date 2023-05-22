#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    switch(a%2)
    {
        case 0:
            cout<<"even"<<endl;
            break;
        // case 1:
        //     cout<<"odd"<<endl;
        //     break;
        default:
            cout<<"odd"<<endl;

    }
    return 0;
}