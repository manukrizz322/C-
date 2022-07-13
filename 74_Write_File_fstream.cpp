#include<iostream>
#include<fstream>
using namespace std;
//Write a File using C++ fstream
int main()
{
    ofstream o("test.txt",ios::trunc);//ios::app
    o<<"Tutor Joes Computer Education,"<<endl;
    o<<"Cherry Road."<<endl;
    o<<"Salem."<<endl;
    o<<"Tutor Joes Stanley."<<endl;
    o.close();
    return 0;
}
