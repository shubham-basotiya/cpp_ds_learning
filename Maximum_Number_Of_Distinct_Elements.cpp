#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int x,y;
for(x = 0; x < 2000; x++)
{
    for(y = 0; y < 2000000; y++)
    {
        int s=0,m=0;
        
        cout<<m<<" : "<<s<<endl;
        if(s==60)
        {
            m++;
            s = 0;
        }
        s++;
    }
}
    return 0;
}