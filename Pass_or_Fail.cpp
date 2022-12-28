#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x, p, i, r;
        cin>>n>>x>>p;
        i = n - x;
        x *= 3;
        r = x - i;
        if(r >= p)
        cout<<"PASS"<<endl;
        else
        cout<<"FAIL"<<endl;
    }

    return 0;
}