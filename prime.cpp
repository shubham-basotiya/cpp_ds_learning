#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,num;
    
    cout<<"Enter two numbers and check between numbers prime or not : ";
    cin>>num>>n;
    
    while(num <= n)
    {
    int div = 2;
    while (div < num)
    {
        if(num%div == 0)
        {
        break;
        }
        div++;
    }
    if(div == num)
    cout<<"\n"<<num<<" is prime number\n";
    num++;
    }
    

    return 0;
}