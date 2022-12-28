#include <iostream>
#include <cmath>
using namespace std;

/* Start Print all prime numbers between 2 given numbers

bool isPrime(int n){                                                        // n1 = 2 and n2 = 10
    for(int i = 2; i <= sqrt(n); i++){                                      // prime number between 2 and 10
        if(n%i == 0){                                                       // 2 3 5 7
            return false;
        }
    }
    return true;
}

int main()
{
    int n1, n2;
    cout<<"Enter two integer number : ";
    cin>>n1>>n2;

    for(int i = n1; i <= n2; i++){
        if (isPrime(i))
        {
            cout<<i<<endl;
        }
    }

    return 0;
}

End Print all prime numbers between 2 given numbers */

/* Start Print Fibenacci Sequence till n

void fib(int n){                                                            // n = 5
    int n1 = 0, n2 = 1;                                                     // fibenacci sequence till n
    cout<<"Fibenacci Sequence : ";                                          // 0 1 1 2 3
    for(int i = 1; i <= n; i++){
        cout<<n1<<" ";
        int total = n1 + n2;
        n1 = n2;
        n2 = total;
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter a num (for fibenacci Sequence) : ";
    cin>>n;
    fib(n);

    return 0;
}

End Print Fibenacci Sequence till n */

/* Start Print Factorial of n 

int factorial(int n){                                                       // n = 4
    int factorial = 1;                                                      // factorial of n
    for(int i = 2; i <= n; i++){                                            // 24
        factorial*=i;
    }
    return factorial;
}

int main()
{
    int n;
    cout<<"Enter a number (for factorial) : ";
    cin>>n;
    cout<<"Factorial Of "<< n << " is : " << factorial(n) << endl;

    return 0; 
}

End Print Factorial of n */

/* Start Calculate nCr 

   where                n!
           nCr  =   ------------
                    r! * (n-r)!

int factorial(int n){                                                       // n = 5 and r = 2
    int factorial = 1;                                                      // Calculate nCr
    for(int i =2; i <= n; i++){                                             // 10
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int n, r;
    cout<<"Enter the value of n and r : ";
    cin>>n>>r;
    cout<<"Calculate the value Of nCr where n = "<< n<< " and r = " << r << " is " << factorial(n)/(factorial(r)*factorial(n-r)) << endl;

    return 0;
}

End Calculate nCr */

/* Start Pascal Triangle 

    where                n!
           nCr  =   ------------
                    r! * (n-r)!

int factorial(int n){                                                       // n = i and r = j
    int factorial = 1;                                                      // Calculate nCr for i & jth position in loop 
    for(int i = 2; i <= n; i++){                                             
        factorial *= i;                                                     // 1
    }                                                                       // 1 1
    return factorial;                                                       // 1 2 1
}                                                                           // 1 3 3 1 
                                                                            // 1 4 6 4 1
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    cout<<"Pascal Triangle - " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            int ans = factorial(i)/(factorial(j)*factorial(i-j));
            cout<<ans<<" ";
        }
        cout<<endl;
    }

    return 0;
}

End Pascal Triangle */
