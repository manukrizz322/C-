#include<iostream>
using namespace std;
class vaccine{
public:
    virtual void putVaccine(){
    cout<<"Covid Vaccine"<<endl;
    }
};
class covaxin:public vaccine{
public:
    void putVaccine(){
    cout<<"Put Covaxin Vaccine"<<endl;
    }

};
class covishield:public vaccine
{
public:
    void putVaccine(){
    cout<<"Put Covishield Vaccine"<<endl;
    }
};
int main(){
    covaxin cx;
    covishield cs;

     vaccine *o=NULL;
     o=&cx;
     o->putVaccine();
     o=&cs;
     o->putVaccine();

return 0;
}
