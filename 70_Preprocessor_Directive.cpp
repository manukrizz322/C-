#include<iostream>
#define PI 3.14
#define rectangle(length,breadth)(length*breadth)
#define createString(s) #s
#define concat(a,b) a ## b
using namespace std;
//Preprocessor Directive in C++ Programming
int main()
{
    cout<<"Area of a circle : "<<PI*5*5<<endl;
    int length = 20, breadth = 5, area;
    area=rectangle(length,breadth);
    cout << "Area of a rectangle is: " << area<<endl;
    cout<<"New String : "<<createString(Tutor Joes)<<endl;
    int ab=100;
    cout<<"The Value of AB : "<<concat(a,b)<<endl;
    cout<<"__LINE__ :" << __LINE__ << endl;
    cout<<"__FILE__ :" << __FILE__ << endl;
    cout<<"__DATE__ :" << __DATE__ << endl;
    cout<<"__TIME__ :" << __TIME__ << endl;
    cout<<"__cplusplus:"<<__cplusplus<<endl;

    return 0;

}
