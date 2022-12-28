#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x, y;
        cin>>x>>y;
    
    
            int r = (x*1) + (y*2);
            if(r == 0 || r == 1)
            {
                cout<<"NO"<<endl;
            }
            else if(x%2 != 0 && r%2 != 0)
            {
                cout<<"NO"<<endl;
            }
            else if(y == 1 && r == 2)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }    
        
        
        
    }
    return 0;
}