//Program to find the sum of n numbers 3=> 1+2+3=>6
#include<iostream>
using namespace std;
int main(){
int n,i,total=0;
cout<<"\nEnter The Limit : ";
cin>>n;//3
for(i=1;i<=n;i++){
        total+=i;
}
cout<<"\nSum of N Number is : "<<total;

return 0;
}
