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
        cin.ignore();

    }
    for(int i=0;i<3;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(ar[i].marks < ar[j].marks);
            {
                swap(ar[i],ar[j]);
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        cout<<ar[i].name<<" "<<ar[i].roll<<" "<<ar[i].marks<<endl;
    }
    return 0;
}