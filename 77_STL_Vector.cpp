/*
 vector < type parameter > vector_name ;
*/
#include<iostream>
#include<vector>
using namespace std;
//STL-Vector in C++
int main()
{
    vector<int> a;
    cout<<"Capacity : "<<a.capacity()<<endl;
    a.push_back(10);
    cout<<"Capacity : "<<a.capacity()<<endl;
    a.push_back(20);
    cout<<"Capacity : "<<a.capacity()<<endl;
    a.push_back(30);
    cout<<"Capacity : "<<a.capacity()<<endl;
    cout<<"Size : "<<a.size()<<endl;
    cout<<"Vector Element At 2 Index : "<<a.at(2)<<endl;
    cout<<"Vector First Element: "<<a.front()<<endl;
    cout<<"Vector Last Element: "<<a.back()<<endl;
    cout<<"Before Pop : "<<endl;
    cout<<"A : ";
    for(int x : a)
    {
        cout<<" "<<x;
    }
    cout<<endl;
    a.pop_back();
    cout<<"After Pop : "<<endl;
    cout<<"A : ";
    for(int x : a)
    {
        cout<<" "<<x;
    }
    cout<<endl;
    cout<<"Before Size : "<<a.size()<<endl;
    a.clear();
    cout<<"After Size : "<<a.size()<<endl;
    cout<<"After Capacity : "<<a.capacity()<<endl;

    vector<int> b(5,10);
    cout<<"B : ";
    for(int x : b)
    {
        cout<<" "<<x;
    }
    vector<int> c(b);
    cout<<endl;
    cout<<"C : ";
    for(int x : c)
    {
    cout<<" "<<x;
    }
     cout <<endl;
  for (auto i = c.begin(); i != c.end(); i++)
    cout << *i << " ";

     vector<int> d(5,20);
     cout<<endl;
    cout<<"C : ";
    for(int x : c)
    {
        cout<<" "<<x;
    }
    cout<<endl;
    cout<<"D : ";
    for(int x : d)
    {
        cout<<" "<<x;
    }

     c.swap(d);

    cout<<endl;
    cout<<"C : ";
    for(int x : c)
    {
        cout<<" "<<x;
    }
    cout<<endl;
    cout<<"D : ";
    for(int x : d)
    {
        cout<<" "<<x;
    }

    return 0;
}
