#include<iostream>
using namespace std;
class Base{
private:
    const int x;
public:
    Base(int a):x(a){
    cout<<"The Value of x :"<<x;
    }
};
int main(){
Base o(50);
return 0;
}
