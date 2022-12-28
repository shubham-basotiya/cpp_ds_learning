#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
    int n;
    cin>>n;
    vector<int> a;
    for(int i = 0; i < n; i++)
    {
        int s; cin>>s;
        a.push_back(s);
    }
    int count = 0;
    int r = accumulate(a.begin(), a.end(),0)/n;
    for(auto x : a)
    {
        
        if(r <= x)
        count++;
    }
    cout<<count<<endl;
    }
    
    return 0;
}