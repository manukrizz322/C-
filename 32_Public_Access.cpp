#include<iostream>
using namespace std;
/*
Access Specifier
    Public
    Private
    Protected
*/
//What is Public Access Specifier in C++
class student
{
public:
    string name;
    int age;

    void display()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Age  :"<<age<<endl;
    }



};
int main()
{
    student o;
    cout<<"\nEnter Name & Age :"<<endl;
    cin>>o.name;
    cin>>o.age;
    o.display();

    return 0;
};

