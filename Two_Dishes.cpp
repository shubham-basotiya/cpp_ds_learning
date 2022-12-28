#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while(t--)
    {
        int n, a, b, c;
        cin>>n>>a>>b>>c;
        int count = 0;
        for(int i = 0; i < b; i++)
        {
            if(a && b)
            {
                a = a--;
                b = b--;
                count++;
            }
            else if(b && c)
            {
                b = b--;
                c = c--;
                count++;
            }
            else
            {
                break;
            }
        }

        if(n <= count)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}

4
3 8
-11 -5
57 492
-677 913


4
3
219
795
