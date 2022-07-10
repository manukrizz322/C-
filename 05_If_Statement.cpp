#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"\nEnter The Value of A&B : "<<endl;
    cin>>a>>b;
    if(a>b)
    {
        cout<<a<<"is Greatest Number";
    }
    if(b>a)
    {
        cout<<b<<"is Greatest Number";
    }
    if(a==b)
    {

        cout<<a<<"and"<<b<<"are Equal";
    }

    return 0;
}
