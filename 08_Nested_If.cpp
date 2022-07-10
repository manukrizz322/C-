#include<iostream>
using namespace std;
/*
age>=18:
    Male:
        Room-5
    Female:
        Room-6
Not Eligible
*/
int main()
{
    char gender;
    int age;
    cout<<"\nEnter The Age   : ";
    cin>>age;
    if(age>=18)
    {
        cout<<"\nENter the Gender : ";
        cin>>gender;
        if(gender=='M'||gender=='m')
        {
            cout<<"\nGo To Room-5";
        }
        else if(gender=='F'||gender=='f')
        {
            cout<<"\nGo To Room-6";
        }
        else
        {
            cout<<"\n Invalid Gender Input";
        }

    }
    else
    {
        cout<<"\nYour Age is Under 18 You are Not Eligible For Vote...";
    }
    return 0;
}
