#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    char name[100];
    int id;
    char dept[50];
};
int main()
{
    student da;
    char nm[100]="Dalia";
    strcpy(da.name,nm);
    da.id=221206;
    char dp[50]="CCE";
    strcpy(da.dept,dp);

    cout<<"Name:"<<da.name<<endl;
    cout<<"ID:"<<da.id<<endl;
    cout<<"Department:"<<da.dept<<endl;
    return 0;
}