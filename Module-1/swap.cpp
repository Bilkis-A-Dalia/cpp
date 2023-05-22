#include<iostream>
#include<utility>
using namespace std;
//call by reference
// void my_swap(int *a,int *b)
// {
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
int main()
{
    int a,b;
    cin>>a>>b;
    //my_swap(&a,&b);
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}