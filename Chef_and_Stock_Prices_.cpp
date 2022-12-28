#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int s,a,b;
        signed int c;
        cin>>s>>a>>b>>c;    
        signed int r = s + (s*(c)/100);
        if(a<=s && b>=s)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}