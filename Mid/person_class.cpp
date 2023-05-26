//Create a class named Person where the class will 
// have properties name(string), height(float) and age(int). 
// Make a constructor and create a dynamic object of that class 
// and finally pass proper values using the constructor.
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
    char name[100]="Bilkis Akter Dalia";
    Person* da= new Person(name,5.2,21);
    cout<<"Name:"<<da->name<<endl;
    cout<<"Height:"<<da->height<<endl;
    cout<<"Age:"<<da->age<<endl;
    
    return 0;
}