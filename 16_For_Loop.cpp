#include<iostream>
//For Loop
/*
    n=5
    t=2
    2*1=2
    .
    .
    2*5=10
*/

using namespace std;
int main(){
int i,n,t;
cout<<"\nEnter The Limit : ";
cin>>n;
cout<<"\nEnter The Table : ";
cin>>t;
for(i=1;i<=n;i++){
cout<<t<<"*"<<i<<"="<<t*i<<endl;
}

return 0;
}

