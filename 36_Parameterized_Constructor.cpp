#include<iostream>
using namespace std;
/*
    Default Constructor
    Parameterized Constructor
    Copy Constructor
*/
//Parameterized Constructor in C++ Programming

class math
{
private:
    int a,b,c;
public:
    math(int x,int y)
    {
        a=x;
        b=y;
    }
    void add()
    {
        c=a+b;
        cout<<"Total : "<<c;
    }
};
int main()
{
    math o(10,25);
    o.add();
    return 0;
}
