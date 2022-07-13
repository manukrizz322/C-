//Exception Handling in C++
#include<iostream>
using namespace std;


int main()
{

    try
    {
       throw string("Joes");
    }
    catch(int e)
    {
         cout<<"Error Code :"<<e<<endl;
    }
    catch(float e)
    {
        cout<<"Float "<<e<<endl;
    }
    catch(char e)
    {
        cout<<"Char "<<e<<endl;
    }
    catch(...)
    {
        cout<<"Error in Program"<<endl;
    }
    return 0;
}

/*
int division(int x,int y)
{
    if(y==0)
        throw 1;
    return x/y;
}

int main()
{
    int a=10,b=5,c;
    try
    {
        c=division(a,b);
        cout<<"Result : "<<c<<endl;
    }
    catch(int e)
    {
        cout<<"Error No :"<<e<<" Cant Divide by Zero"<<endl;
    }
    return 0;
}
*/
/*
int main()
{
    int a=10,b=0,c;
    try
    {
         if(b==0)
            throw 25;
        c=a/b;
        cout<<"Result : "<<c<<endl;
    }
    catch(int e)
    {
         cout<<"Error No :"<<e<<" Cant Divide by Zero"<<endl;
    }
    return 0;
}
*/
