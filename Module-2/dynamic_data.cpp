#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a= new int;//syntex//heap memeory
    *a=10;
    cout<<a<<endl;//print will be address
    cout<<*a<<endl;//after dereference
    
    float *b=new float;
    *b=2.345;
    cout<<*b<<endl;
    return 0;
}