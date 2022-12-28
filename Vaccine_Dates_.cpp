#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int d, l, r;
        cin>>d>>l>>r;
        if(l > d)
        {
            cout<<"Too Early"<<endl;
        }
        else if(r < d)
        {
            cout<<"Too Late"<<endl;
        }
        else{
            cout<<"Take second dose now"<<endl;
        }
    }
    
    return 0;
}