#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b>a){
            a = a+c; 
        }
        else{
            b=b+c;
        }
        if(b>a){
            a=a+d;
        }
        else{
            b=b+d;
        }
        if(b>a){
            cout << "S" << endl;
        }
        else{
            cout << "N" << endl;
        }
    }
    return 0;
}