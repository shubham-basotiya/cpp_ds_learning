#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x, y, p, q;
        cin>>x>>y>>p>>q;
        int r1 = x + (p*10);
        int r2 = y + (q*10);
        if(r1 == r2){
            cout << "Draw" << endl; 
        }
        else if(r1 < r2){
            cout << "Chef" << endl;
        }
        else{
            cout << "Chefina" << endl;
        }
    }
    
    return 0;
}