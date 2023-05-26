// compare whose age is greater, and print his/her name.
#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    char name[100];
    float height;
    int age;
    
        Person(char n[100],float h,int a)
            {
                height=h;
                age=a;
                strcpy(name,n);
            }
 
};
int main()
{
    char name1[100]="Bilkis Akter";
    Person* da= new Person(name1,5.2,21);
    char name2[100]="Dalia";
    Person* da2= new Person(name2,5.1,20);

    if(da->age>da2->age)
    {
        cout<<da->name<<endl;
    }
    else
    {
        cout<<da2->name<<endl;
    }
    return 0;
}