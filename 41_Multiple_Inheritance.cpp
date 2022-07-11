#include<iostream>
using namespace std;
class father
{
public:
    void fishing()
    {
        cout<<"Learn Fishing "<<endl;
    }
};
class mother
{
public:
    void cooking()
    {
        cout<<"Learn Cooking."<<endl;
    }
};
class son:public father,public mother
{
public:
    void coding()
    {
        cout<<"Learn Coding ."<<endl;
    }

};
int main()
{
    son o;
    o.fishing();
    o.cooking();
    o.coding();


    return 0;
}
