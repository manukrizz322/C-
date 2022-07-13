#include<iostream>
using namespace std;
class Base{
private:
    char x;
public:
    Base(int a):x(a){
    cout<<"X : "<<(int)x<<endl;
    }
};
int main(){
Base o(65);
return 0;
}
