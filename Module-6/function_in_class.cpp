#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
    string name;
    int age;
    int marks1;
    int marks2;

    //constructor
    person(string nm,int ag,int m1,int m2)
    {
        name=nm;
        age=ag;
        marks1=m1;
        marks2=m2;
    }
    
    //function 
    void da()
    {
        cout<<name<<" "<<age<<endl;
    }

    int total_marks()
    {
        return marks1+marks2;
    }
};
int main()
{
    person dalia("zhao lusi",23,95,85);
    //dalia.da();
    cout<<dalia.total_marks()<<endl;
    return 0;
}