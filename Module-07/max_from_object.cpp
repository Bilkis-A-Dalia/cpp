#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
        string name;
        int roll;
        int marks;
};
int main()
{
    student ar[3];
    for(int i=0;i<3;i++)
    {
        getline(cin,ar[i].name);
        cin>>ar[i].roll>>ar[i].marks;
        getchar();
    }
    student mx;
    mx.marks=INT_MIN;
    for(int i=0;i<3;i++)
    {
        if(ar[i].marks>mx.marks)
        {
            mx=ar[i];
        }
    }
    cout<<mx.name<<" "<<mx.roll<<" "<<mx.marks<<endl;

    student mn;
    mn.marks=INT_MAX;
    for(int i=0;i<3;i++)
    {
        if(ar[i].marks<mn.marks)
        {
            mn=ar[i];
        }
    }
    cout<<mn.name<<" "<<mn.roll<<" "<<mn.marks<<endl;

    return 0;
}