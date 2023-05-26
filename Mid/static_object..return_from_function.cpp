#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    char name[100];
    int id;
    char dept[50];
         
        
        student(int i,char *d,char *n)
        {
            id=i;
            strcpy(dept,d);
            strcpy(name,n);
        }
};
 
student info()
{
    char name[100]="Dalia";
    char dept[50]="CCE";
    student da(221206,dept,name);
    return da;
} 
int main()
{
    student da=info();

    cout<<"Name:"<<da.name<<endl;
    cout<<"ID:"<<da.id<<endl;
    cout<<"Department:"<<da.dept<<endl;
    return 0;
}