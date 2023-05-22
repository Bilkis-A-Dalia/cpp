#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[100];
    //cin.getline(a,100);//enter will be not counted
    fgets(a,100,stdin);//with enter
    cout<<strlen(a);
    return 0;
}