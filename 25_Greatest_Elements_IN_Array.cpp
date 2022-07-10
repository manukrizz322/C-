#include<iostream>
using namespace std;
//Program to find Greatest element in an array.
int main()
{
    int a[100],n,i,t;
    cout<<"\nEnter The Limit : ";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"\nEnter The Value : ";
        cin>>a[i];
    }
    t=a[0];
    for(i=1; i<n; i++)
    {
        if(t<a[i])
        {
            t=a[i];

        }


    }
    cout<<"\nThe Greatest No is : "<<t;
    return 0;
}

