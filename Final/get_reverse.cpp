#include<bits/stdc++.h>
using namespace std;
class Students
{
    public:
        string nm;
        int cls;
        char s;
        int math_marks;
        int eng_marks;
};
int main()
{
    int n;
    cin>>n;
    Students a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i].nm>>a[i].cls>>a[i].
        s>>a[i].math_marks>>a[i].eng_marks;
    }
    for (int i=n-1;i>=0;i--)
    {
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].
        s<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
    }  
    return 0;
}