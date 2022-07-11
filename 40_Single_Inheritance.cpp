#include<iostream>
using namespace std;
class father
{
public:
    void house()
    {
        cout<<"Have own 2BHK House."<<endl;
    }
};
class son:public father
{

public:
    void car()
    {

        cout<<"Have own Audi Car ."<<endl;
    }
};
int main()
{
    son o;
    o.house();
    o.car();

    return 0;
}
