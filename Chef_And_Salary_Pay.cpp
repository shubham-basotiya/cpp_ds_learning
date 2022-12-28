#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x, y, totalSalary = 0;
        string s;
        cin>>x>>y;
        cin>>s;
        // char c[s.length()];
        int old = 0, count = 0;


        for(int i = 0; i < sizeof(s); i++)
        {
              if(s[i] == '1')
              count++;
              
            int current = 0;

            for(int j = i; i < sizeof(s); j++)
            {
                if(s[j] == '1')
                current++;

                else
                break;
            }

            old = max(old, current);
              
        }
   
        totalSalary = x * count + y * old;
        cout<<totalSalary<<endl; 

    }
    return 0;
}