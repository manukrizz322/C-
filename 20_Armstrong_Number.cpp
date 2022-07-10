/*
 153 => ( 1*1*1 ) + ( 5*5*5 ) + ( 3*3*3 ) = 153 is Armstrong Number
    453 => ( 4*4*4 ) + ( 5*5*5 ) + ( 3*3*3 ) = 216 is Not Armstrong Number
*/
#include<iostream>
using namespace std;
int main(){
int sum=0,n,t,r;
for(int i=100;i<=999;i++){
n=i;
while(n>0){

r=n%10;
sum=sum+(r*r*r);
n=n/10;
}
if(sum==i){

    cout<<i<<endl;
}
sum=0;
}
return 0;
}
