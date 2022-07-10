#include<iostream>
using namespace std;
//Destructor in C++ Programming

/*
Destructor is an instance member function which is invoked automatically
whenever an object is going to destroy.
Means, a destructor is the last function that is going to be
called before an object is destroyed.
*/

class math
{
private:
    int a,b,c;
public:
    math()
    {
        a=10;
        b=20;
    }
    ~math()
    {
        cout<<"Memory Destroyed";
    }
    void add()
    {
        c=a+b;
        cout<<"Total : "<<c<<endl;
    }
};

int main()
{
    math o;
    o.add();
    return 0;
}
