#include<iostream>
using namespace std;
class bike
{
 public:
    /* virtual void start()
     {
         cout<<"Bike Start"<<endl;
     }*/
    virtual void start()=0;
};
class Apache:public bike
{
public:
    void start()
    {
        cout<<"Apache Start"<<endl;
    }
};
int main()
{
    bike *p=new Apache();
    p->start();
    return 0;
}
