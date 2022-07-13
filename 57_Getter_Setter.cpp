#include<iostream>
using namespace std;
class student
{
private:
    string name;
    int age;

public:
    student(string n,int a)
    {
        this->setName(n);
        this->setAge(a);
    }
    string getName()
    {
        return this->name;
    }
    void setName(string n)
    {
        this->name=n;
    }
    int getAge()
    {
        return this->age;
    }
    void setAge(int a)
    {
        this->age=a;
    }
    void printDetails()
    {
        cout<<"Name  : "<<name<<endl;
        cout<<"Age   : "<<age<<endl;
    }

};
int main()
{
    student o("Ram Kumar",25);
    o.printDetails();
    o.setName("Raj Kumar");
    o.printDetails();
    cout<<o.getName()<<endl;
    return 0;
}
