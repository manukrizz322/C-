#include<iostream>
using namespace std;
class base
{
protected:
    int a,b;
public:
    void add()
    {
        cout<<"\nEnter 2 Nos : "<<endl;
        cin>>a>>b;
        cout<<"Total : "<<a+b<<endl;

    }

};
class derived:public base
{
private:
    int c;
public:
    void add()
    {
        cout<<"\nEnter 3 Nos : "<<endl;
        cin>>a>>b>>c;
        cout<<"Total : "<<a+b+c<<endl;
    }

};
int main(){

derived d;
d.add();
return 0;
}
