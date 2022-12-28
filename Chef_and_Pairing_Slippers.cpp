#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n, l, x;
        cin>>n>>l>>x;
        int max_amount;
        int right = n - l;
        if(right >= l)
         {
             max_amount = l * x;
             cout<<max_amount<<endl; 
        }
        else
         {
            max_amount = right * x;
             cout<<max_amount<<endl;
         }
    }

    return 0;
}