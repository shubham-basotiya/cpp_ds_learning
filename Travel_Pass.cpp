#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, a, b, r;
        vector<char> s;
        cin>>n>>a>>b;
        for(int i = 0; i < n; i++)
        {
            char e;
            cin>>e;
            s.push_back(e); 
        }
        int count_1 = 0, count_2 = 0;
        for(auto x: s)
        {
            if(x=='0')
            count_1++;
            else 
            count_2++;
        }
        if(n == count_1)
        {
            r = count_1 * a; 
            cout<<r<<endl;
        }
        else if(n == count_2)
        {
            r = count_2 * b;
            cout<<r<<endl; 
        }
        else
        {
            r = (count_1 * a) + (count_2 * b); 
            cout<<r<<endl;
        }

    }
    return 0;
}