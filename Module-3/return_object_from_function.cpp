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
 
student fun()
{
    char name[100]="Dalia";
    student da(06,'A',3,name);
    return da;
} 
int main()
{
    student da=fun();

    cout<<da.name<<endl;
    cout<<da.roll<<endl;
    cout<<da.section<<endl;
    cout<<da.cls<<endl;
    return 0;
}