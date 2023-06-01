#include<bits/stdc++.h>
using namespace std;
class Students
{
    public:
        string nm;
        int cls;
        char s;
        int id;
        int math_marks;
        int eng_marks;
        int total_marks;
};
bool cmp(Students arku,Students dalu)
{
    if(arku.total_marks!=dalu.total_marks)
    {
         return arku.total_marks>dalu.total_marks;
    }
    else{
        return arku.id<dalu.id;
    }
}
int main()
{
    int n;
    cin>>n;
    Students ar[n];
    for (int i=0; i<n; i++)
    {
        cin>>ar[i].nm>>ar[i].cls>>ar[i].s>>ar[i].id>>ar[i].
        math_marks>>ar[i].eng_marks;
        ar[i].total_marks=ar[i].math_marks+ar[i].eng_marks;
        cin.ignore();
    }    
    sort(ar,ar+n,cmp);
    for (int i =0; i<n; i++)
    {
        cout<<ar[i].nm<<" "<<ar[i].cls<<" "<<ar[i].s<<" "<<ar[i].
        id<<" "<<ar[i].math_marks<<" "<<ar[i].eng_marks<<endl;
    }  
    return 0;
}