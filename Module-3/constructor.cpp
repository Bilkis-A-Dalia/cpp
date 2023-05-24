#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    char name[100];
    int roll;
    int cls;
    char section;
         
         //constructor
        student(int r,int s,int c,char *n)
        {
            roll=r;
            section=s;
            cls=c;
            strcpy(name,n);
        }
};
int main()
{
    student da(06,'A',03,"Dalia");

    cout<<"Name: "<<da.name<<endl;
    cout<<"Id: "<<da.roll;
    return 0;
}