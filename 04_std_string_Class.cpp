#include<iostream>
using namespace std;
/*
C++ String
    Input Functions
    Capacity Functions
    Iterator Functions
    Manipulating Functions
*/
int main()
{
//string a="Welcome To Tutor Joes";
    string a("Welcome To Tutor Joes");
    cout<<a<<endl;

//String Concatination
    string firstname="Tutor";
    string lastname ="Joes";
    cout<<firstname+" "+lastname<<endl;
    string fullname=firstname.append(lastname);
    cout<<fullname<<endl;

    //string Access
    string name="Sam Kumar";
    cout<<name<<endl;
    cout<<name[0]<<endl;
    name[0]='R';
    cout<<name<<endl;

    //Input Functions
    //--------------------------------------
    string str;
    cout<<"Enter The String : ";
    cin>>str;
    cout<<"String : "<<str<<endl;
    fflush(stdin);
    cout<<"Enter The String : "<<endl;
    getline(cin,str);
    cout<<"String : "<<str;
    //string str;
    cout<<"\nEnter The String : ";
    cin>>str;
    str.push_back('s');
    cout<<str<<endl;
    str.pop_back();
    cout<<str<<endl;

    //Capacity Functions
    //------------------------------------------
    string str1("Tutor Joes");
    cout<<str1<<endl;
    cout<<"Size    : "<<str1.size()<<endl;
    cout<<"Length  : "<<str1.length()<<endl;
    cout<<"Size    : "<<str1.max_size()<<endl;

    //Iterator Functions
    //------------------------------------------
    string str2="Turor Joes";
    string::iterator it;
    for(it=str2.begin();it!=str2.end();it++)
        cout<<*it<<endl;
    cout<<"______________________"<<endl;
     string::reverse_iterator it2;
    for(it2=str.rbegin();it2!=str.rend();it2++)
        cout<<*it2<<endl;
//Manipulating Functions
    //-------------------------------------------------
    string x="Ram";
    string y="Sam";
    cout<<"Before X :"<<x<<endl;
    cout<<"Before Y :"<<y<<endl;
    x.swap(y);
    cout<<"After X :"<<x<<endl;
    cout<<"After Y :"<<y<<endl;




    return 0;
}
