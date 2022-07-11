#include<iostream>
using namespace std;
//Protected Access Specifier in C++
class A
{
   protected:
       int x;
};

class B:public A
{
public:
    void getDetails()
    {
        cout<<"\nEnter The Value of X : ";
        cin>>x;
    }
    void display()
    {
        cout<<"X : "<<x;
    }
};
int main()
{
    B o;
    o.getDetails();
    o.display();
    return 0;
}
