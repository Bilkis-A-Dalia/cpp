#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    char name[100];
    int roll;
    int cls;
    char section;
};
int main()
{
    student da;
    da.roll=04;
    da.cls=4;
    da.section='A';
    char nm[100]="Dalia";
    strcpy(da.name,nm);

    student bi;
    bi.roll=06;
    bi.cls=3;
    bi.section='A';
    char nm2[100]="Bilkis";
    strcpy(bi.name,nm2);

    cout<<bi.name<<" "<<da.name;
    return 0;
}