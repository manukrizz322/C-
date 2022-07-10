#include<iostream>
using namespace std;

template <class T>
void swaping(T &a,T &b)
{
    T t=a;
    a=b;
    b=t;
}
int main()
{
    char a='A',b='B';
    int x=10,y=20;
    cout<<"Before Swap A:"<<a<<"|B:"<<b<<endl;
    swaping(a,b);
    cout<<"After Swap A:"<<a<<"|B:"<<b<<endl;

    cout<<"Before Swap X:"<<x<<"|Y:"<<y<<endl;
    swaping(x,y);
    cout<<"Before Swap X:"<<x<<"|Y:"<<y<<endl;


    return 0;
}
