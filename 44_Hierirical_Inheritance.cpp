#include<iostream>
using namespace std;
//Hierarchical Inheritance in C++ Programming

class shape
{
public:
    float length,breadth,radius;
};
class rectangle:public shape
{
    public:
    void getRectangleDetails()
    {
        cout<<"Enter Length: ";
        cin>>length;
        cout<<"Enter Breadth: ";
        cin>>breadth;
    }
    float rectangle_area()
    {
        return length*breadth;
    }
};

class circle:public shape
{
    public:
    void getCircleDetails()
    {
        cout<<"Enter Radius: ";
        cin>>radius;
    }
    double circle_area()
    {
        return 3.14*(radius*radius);
    }
};

class square:public shape
{

public:
    void getSquareDetails()
    {
        cout<<"Enter Side: ";
        cin>>length;
    }
     double square_area()
    {
        return length*length;
    }
};
int main()
{
    rectangle r;
    circle c;
    square s;
    r.getRectangleDetails();
    cout<<"Area of Rectangle   : " <<r.rectangle_area()<<endl;
    c.getCircleDetails ();
    cout<<"Area of Circle   : " <<c.circle_area()<<endl;
    s.getSquareDetails ();
    cout<<"Area of Square   : " <<s.square_area()<<endl;
    return 0;
}
