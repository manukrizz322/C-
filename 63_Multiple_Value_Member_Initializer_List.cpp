#include<iostream>
using namespace std;
class Base
{
private:
    int x,y;
public:
    Base(int a,int b):x(a),y(b) {}
    void print()
    {
        cout<<"X : "<<x<<endl;
        cout<<"Y : "<<y<<endl;
    }
};
int main()
{
    Base o(25,35);
    o.print();
    return 0;
}
