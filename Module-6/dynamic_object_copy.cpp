#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
        string name;
        int age;

        person(string name,int age)
        {
            this->name=name;
            this->age=age;
        }
};
int main()
{
    person* bilkis=new person("Bilkis Akter",21);
    person* zhao=new person("Zhao Lusi",23);
    // //1
    // bilkis=zhao;
    // //2
    // bilkis->name=zhao->name;
    // bilkis->age=zhao->age;
    //3
    *bilkis=*zhao;
    cout<<bilkis->name<<" "<<bilkis->age<<endl;

    return 0;
}