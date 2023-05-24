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
    char name[100]="Bilkis A Dalia";
    //student da=(06,'A',3,name);
    student* da = new student(06,'A',3,name);
    
    //update
    (*da).roll=221206;

    //dereference
    cout<<(*da).name<<endl;
    cout<<(*da).roll<<endl;
    cout<<(*da).section<<endl;
    cout<<(*da).cls<<endl<<endl;

    
    //shortcut(arrow sign)
    //(*da). = da->
    cout<<da->name<<endl;
    cout<<da->roll<<endl;
    cout<<da->section<<endl;
    cout<<da->cls<<endl;

    //delete object
    delete da;
    
    //prove
    cout<<da->name<<endl;
    cout<<da->roll<<endl;
    cout<<da->section<<endl;
    cout<<da->cls<<endl;
    return 0;
}