#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number : ";
    cin<<n;
    while(n/2){
        cout << n%2 << endl;
        n = n/2;
    }
    return 0;
}