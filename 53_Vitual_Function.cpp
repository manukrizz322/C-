#include<iostream>
using namespace std;
//Virtual Function in C++ Programming

/*
virtual Function is function is declared in
 base class and redefined in derived class.
Ability for the runtime polymorphism
*/
class Base
{
public:
    virtual void fun()
    {
        cout<<"Function of Base Class"<<endl;
    }

};
class Derived:public Base
{
public:
    void fun()
    {
        cout<<"Function in Derived Class"<<endl;
    }
};
int main()
{

    /*Derived o;
    o.fun();*/

   Derived o;
    Base *p=&o;
    p->fun();
    return 0;

}

