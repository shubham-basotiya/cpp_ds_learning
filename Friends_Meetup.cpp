#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x1, x2 , d;
        cin>>x1>>x2;

        /* Start this logic given by me
        if(x1 > x2){
            d = x1- x2;
        }
        else{
            d = x2 - x1;
        }

        if(x1 == x2){
            cout<<"YES"<<endl;
        }

        else if(x1 > x2){
            if(x1+d == x2+d*2)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

        End this logic given by me */

        if(x2<= x1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    
    return 0;
}

