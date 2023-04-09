#include <iostream>
using namespace std;

/*
int sumOfN(int n){
    if(n==1){
        return n;
    }

    int prevSum = sumOfN(n-1);
    return n + prevSum;
}
*/

/*
int powerOfN(int n, int p){

    if(p == 0){
        return 1;
    }

    int preValue = powerOfN(n, p-1);
    return n * preValue;
}
*/

/*
int factorial(int n){
    if(n == 0){
        return 1; 
    }
    int prevFactorial = factorial(n-1);

    return n * prevFactorial;
}
*/

/*
int fibonacci(int n){
    if(n == 0 || n == 1){
        return n;
    }
    int prvfib = fibonacci(n-1) + fibonacci(n-2);
    return prvfib;
}
*/

int arrCheck(int n, int arr[]){
    if(n == 0){
        return arr[0];
    }

    bool chck = arr[n] > arrCheck(n-1, arr);

    return chck;
   
}



int main(){

    int * arr = NULL;

    int n;//, p;

    cout<<"enter the size of array : ";
    cin>>n;

    arr = new int[n];

    for(int i = 0; i < n; i++){
        cin>> arr[i];
    }


    cout << "array is sorted or not : " << arrCheck(n-1, arr);

    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }
    
    // cout<<"enter the value of p : ";
    // cin>>p;

    // cout << "total sum of n is : " << sumOfN(n);
    // cout << "power of n is : " << powerOfN(n, p);
    // cout << "factorial of n is : " << factorial(n);
    // cout << "fibonacci number of of n is : " << fibonacci(n); 

    return 0;
}