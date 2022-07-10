#include<iostream>
using namespace std;
// :: Scope Resolution Operator in C++
class student
{
private:
    string name;
    int m1,m2,m3,tot;
    float avg;
public:
    void getData()
    {
        cout<<"Enter The Name : ";
        cin>>name;
        cout<<"Enter 3 marks :"<<endl;
        cin>>m1>>m2>>m3;
    }
    void display();




};
void student::display(){
     tot=m1+m2+m3;
    avg=tot/3.0;
    cout<<"Name    : "<<name<<endl;
    cout<<"M1      : "<<m1<<endl;
    cout<<"M2      : "<<m2<<endl;
    cout<<"M3      : "<<m3<<endl;
    cout<<"Total   : "<<tot<<endl;
    cout<<"Average : "<<avg<<endl;

}
int main(){
student o;
o.getData();
o.display();
return 0;
}

