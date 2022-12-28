#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        char a[3], x, y;
        int r1,r2;
        for(int i = 0; i < 3; i++){
            cin>>a[i];
        }

        cin>>x>>y;
        
        for(int i = 0; i < 3; i++){
            if(x == a[i])
                r1 = i;
            if(y == a[i])
                r2 = i;            
        }
        if(r1<r2)
        cout<<x<<endl;
        else
        cout<<y<<endl;
    }
    
    return 0;
}