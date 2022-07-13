#include<iostream>
#include<fstream>
using namespace std;
//Read a File using C++ fstream
int main()
{
    string myText;
    ifstream MyReadFile("test.txt");
    while(getline(MyReadFile,myText))
    {
          cout << myText<<endl;
    }
    MyReadFile.close();
    return 0;
}
