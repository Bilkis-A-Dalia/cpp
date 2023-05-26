#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    char name[100];
    int id;
    char dept[50];
         
        //Constructor
        student(char *n,int i,char *d)
        {
            strcpy(name,n);
            id=i;
            strcpy(dept,d);
        }
};
int main()
{
    student da("Dalia",221206,"CCE");
    cout<<"Name:"<<da.name<<endl;
    cout<<"ID:"<<da.id<<endl;
    cout<<"Department:"<<da.dept<<endl;
    return 0;
}