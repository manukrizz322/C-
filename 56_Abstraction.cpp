#include<iostream>
using namespace std;
class BANK
{
public:
    virtual void debit_credit()=0;
    virtual void loan()=0;
};
class HDFC:public BANK
{
public:
    void debit_credit()
    {
        cout<<"Hdfc Banking Debit Card"<<endl;
    }
    void loan()
    {
        cout<<"HDFC Banking loan 12"<<endl;
    }

};
class IB:public BANK
{
public:
    void debit_credit()
    {
        cout<<"Indian banking Debit Credit"<<endl;
    }
    void loan()
    {
        cout<<"Indian Banking loan 8%"<<endl;
    }

};
int main()
{
    BANK *b=new HDFC();
    b->debit_credit();
    b->loan();
    return 0;
}
