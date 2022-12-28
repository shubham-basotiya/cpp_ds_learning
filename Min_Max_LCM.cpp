#include <iostream>
#include <numeric>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x, k;
        cin>>x>>k;
        int min= x;
        for(int i = x; i <= k; i++)
        {
            for(int j = x+1; j <= k; j++)
            {
                for(int g = x; g < j; g++)
                {
                if(min > lcm(g, j))
                {
                    min = lcm(g, j);
                }
                }
            }
        }
        int max = ((x * k) - 1) * (x*k);
        cout<<min<<" "<<max<<endl;
    }
    return 0;
}