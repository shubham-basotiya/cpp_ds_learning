#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,a,b,k;
        cin>>x>>y>>a>>b>>k;
        while(k--)
        {
            x = x + a;
            y = y + b;
        }
        if(x==y)
        {
            cout<<"SAME PRICE"<<endl;
        }
        else if(x>y)
        {
            cout<<"DIESEL"<<endl;
        }
        else
        {
            cout<<"PETROL"<<endl;
        }
    }
    return 0;
}