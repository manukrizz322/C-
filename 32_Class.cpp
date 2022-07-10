/*
Basic Class Example
1.Area of a circle
2.Circumference of a circle
*/
#include<iostream>
using namespace std;
class circle
{
private:
    float radius;
public:
    float area()
    {
        cout<<"\nEnter The Radius : ";
        cin>>radius;
        return(3.14*(radius*radius));
    }
    float circumference()
    {
        return (2*3.14*radius);
    }
};
int main()
{
    circle o;
    cout<<"Area of Circle : "<<o.area()<<endl;
    cout<<"Circumference of Circle : "<<o.circumference();
    return 0;
}
