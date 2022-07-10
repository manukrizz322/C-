/*limit = 5
    5 , 1 => 5 % 1 = 0
    5 , 2 => 5 % 2 = 1
    5 , 3 => 5 % 3 = 1
    5 , 4 => 5 % 4 = 2
    5 , 5 => 5 % 5 = 0*/
 #include<iostream>
 using namespace std;
 int main(){
 int n;
 cout<<"\nEnter The Number : ";
 cin>>n;
 for(int i=1;i<=n;i++){
if(n%i==0)
    cout<<i<<endl;
 }

 return 0;

 }


