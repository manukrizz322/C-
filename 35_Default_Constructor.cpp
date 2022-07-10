#include<iostream>
using namespace std;
/*
    Default Constructor
    Parameterized Constructor
    Copy Constructor
*/
//Default Constructor in C++ Programming
/*

A constructor in C++ is a special ‘MEMBER FUNCTION’
having the same name as that of its class which is
used to initialize some valid values to the data members
of an object. It is executed automatically whenever an
object of a class is created.

*/
class math
{
private:
    int a,b,c;
public:
    math()
    {
        a=0;
        b=0;
    }
    void add()
    {
        c=a+b;
        cout<<"Total : "<<c;
    }
};
int main()
{
    math o;
    o.add();
    return 0;
}

