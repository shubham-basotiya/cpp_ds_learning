#include <iostream>
using namespace std;

void primeSieve(int n){
    int prime[n] = {0};
    for(int i = 0; i < n; i++){
        cout << prime[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter the number where you want till print prime number : ";
    cin>>n;

    cout << "2 to " << n << " prime numbers : ";
    primeSieve(n);

    return 0;
}