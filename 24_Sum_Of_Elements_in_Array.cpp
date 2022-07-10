#include<iostream>
using namespace std;
//Program to find Sum of element in an array.
int main()
{
    /*int a[100],n,i,sum=0;
    cout<<"\nEnter The Limit : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"\nEnter The Value : ";
        cin>>a[i];
        sum+=a[i];//sum=sum+a[i];
    }
    printf("\nSum : %d",sum);*/

    int a[100]={1,2},n=2,i,sum=0;

    for(i=0;i<n;i++)
    {

        sum+=a[i];//sum=sum+a[i];
    }
    printf("\nSum : %d",sum);
    return 0;
}
