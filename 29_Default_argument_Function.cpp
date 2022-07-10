#include<iostream>
using namespace std;

void biodata(string name,int age,string city="Salem")
{

    cout<<name<<" is from "<<city<<" and age is "<<age<<endl;

}
int main(){
biodata("Ram",25);
biodata("Sam",22,"Namakal");
return 0;
}
