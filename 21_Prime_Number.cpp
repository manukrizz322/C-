//Program for prime number between 1-100
#include<iostream>
using namespace std;
int main()
{
    int n,c=0;
    for(n=1; n<=100; n++)
    {
        for(int i=1; i<=n; i++)
        {
            if(n%i==0)
                c++;

        }
        if(c==2)
        {
            cout<<n<<endl;
        }
        c=0;
    }

    return 0;
}
