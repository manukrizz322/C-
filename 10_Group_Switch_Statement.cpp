#include<iostream>
using namespace std;
int main(){
int m;
cout<<"\nEnter The Month in Number(1-12)";
cin>>m;
switch(m)
{
 case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout<<"Days : 31"<<endl;
        break;
    case 2:
        cout<<"Days : 28 | 29"<<endl;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout<<"Days : 30"<<endl;
        break;
    default:
        cout<<"Invalid Month Value"<<endl;
        break;






}

return 0;
}
