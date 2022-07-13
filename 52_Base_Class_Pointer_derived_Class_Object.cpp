//Base Class Pointer derived Class Object
#include<iostream>
using namespace std;
class car//base class
{
public:
    void start()
    {
        cout<<"Car Start "<<endl;
    }

};
class BMW:public car//Derives class
{
public:
    void AdvanceGear()
    {
        cout<<"BMW Advance Gear"<<endl;
    }

};
int main()
{
    /* BMW o;
     o.start();
     o.AdvanceGear();*/
    BMW b;
    car *p=NULL;
    p=&b;
    p->start();



    return 0;
}


