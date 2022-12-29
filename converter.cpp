#include <iostream>
using namespace std;

int main(){
    int n, decimal = 0, pow = 1;
    cout << "Enter a binary number : ";
    cin>>n;
    while(n){
        int last_bit = n%10;
        decimal = decimal + last_bit*pow;
        n = n/10;
        pow *= 2;
    }

    cout << "Here's your result look at this : " << decimal << endl; 
    return 0;
}