#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,p,q;
        cin>>a>>b>>p>>q;
        if((a + b) != (p + q))
        {
            cout<<"hello"<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    
    return 0;
}