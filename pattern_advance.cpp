#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number : ";
    cin>>n;

    for(int r = n; r >= 1; r--){
        int counter = 0;
        for(int c = 1; c <= n; c++){
            if(c >= r){
            counter++;
            cout << counter; 
            }else {
                cout << " ";
            }
        }
        counter--;
        while(counter >= 1){
            cout << counter;
            counter--;
        }
        cout<<endl;
    }

    // for(int row = 1; row <= n; row++){
    //     for(int col = 1; col <= 2*n-1; col++){
    //         if(col <= n-row){
    //             cout << "  ";
    //         } else if(col == (n-1+row)){
    //             cout<<col<<endl;
    //             break;
    //         } else{
    //             cout << col << " ";
    //         }
    //     }
    // }

//brute-force technique time complexity - n2 => n(3n) => 3n2 => n2, c = 3
/*

    for (int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++){
            cout << "  ";
        }
        for(int k = 1; k <= i; k++){
            cout << k << " ";
        }
        for(int l = i-1; l >= 1; l--){
            cout << l << " ";
        }
        cout<<endl;
    }
*/
    return 0;
}