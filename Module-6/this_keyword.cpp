#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
        string name;
        int age;
        person(string name, int age)
        {
            (*this).name=name;
            this->age=age;
        }
        void dalia()
        {
            cout<<"hello"<<endl;
        }
};
int main()
{
    person bilkis("zhao lusi",23);
    cout<<bilkis.name<<" "<<bilkis.age<<endl; 
    return 0;
}