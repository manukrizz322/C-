#include<iostream>
#include<cctype>
using namespace std;
int main(){
  /*
    Character Classification Functions in C++ Programming
      isalnum
      isalpha
      isdigit
      islower
      isupper
      isspace
    */

    char a[6]="R@ 1a";
     for (int i=0; i<=5; i++)
    {
        if(isspace(a[i]))
            cout<<a[i]<<" Space"<<endl;
    }

return 0;
}
