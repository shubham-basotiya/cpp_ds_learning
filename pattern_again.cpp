#include <iostream>
using namespace std;

int main() {
    // Rectangle pattern

    /*

    ****
    ****
    ****
    ****
    ****
    
    */

   /*
   int row = 5, column = 4;

    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= column; j++){
            cout << "*"; 
        }
    cout << endl;
   }
   */

    //Hollow rectangle pattern

    /*
    int row = 5, column = 4;

    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= column; j++){
            if(i == 1 || i == row || j == 1 || j == column){
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout<<endl;
    }
    */

   //Inverted half pyramid

    /*
   int n;
   cin>>n;

   for(int i = 5; i > 0; i--){
       for(int j = 1; j <= i; j++){
           cout << "*";
       }
       cout << endl;
   }
   */

  //Half pyramid after 180 deg. rotation

  /*
  int row;
  cout <<"Enter the number of row and columns : ";
  cin>>row;
  */
//my way
 /*
  for(int i = row; i >= 1; i--){
      for(int j = 1; j <= row; j++){
          if(j >= i){
              cout << "*";
          }
          else {
              cout << " ";
          }
      }
      cout<<endl;
  }
  */

//teacher way
/*
for(int i = 1; i <= row; i++){
    for(int j = 1; j <= row; j++){
        if(j <= row-i){
            cout << " ";
        } else{
            cout << "*";
        }
    }
    cout << endl;
}
*/

// Half pyramid using numbers

/*
int n;
cin>>n;

for(int i = 1; i <=n; i++){
    for(int j = 1; j <= i; j++){
        cout<<i;
    }
    cout<<endl;
}
*/

//Floyd's Triangle

/*
int n, counter = 1;
cin>>n;
for(int i = 1; i <= n; i++){
    for(int j= 1; j <= i; j++){
        cout << counter++;
    }
    cout<<endl;
}

*/

//Butterfly pattern

/*
int n;
cin>>n;
*/

//my way

/*
//outer loop
for(int top_loop = 1; top_loop <= n; top_loop++){
    //inner loop
        for(int j = 1; j <= 2*n; j++){
            if((j <= top_loop) || (j > (2*n)-top_loop)){
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout<<endl;
}
//outer loop
for(int bottom_loop = n; bottom_loop >= 1; bottom_loop--){
    //inner loop
        for(int j = 1; j <= 2*n; j++){
            if((j <= bottom_loop) || (j > (2*n)-bottom_loop)){
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout<<endl;
}
*/

//teacher way

/*
//outer top loop
for(int i = i; i <= n; i++){
    for(int j = 1; j <= i; j++){
        cout<<"*";
    }

//count space
    int space = 2*n- 2*i;

    for(int j = 1; j <= space; j++){
        cout<<" ";
    }

    for(int j = 1; j <= i; j++){
        cout<<"*";
    }
    
    //line break
    cout<<endl;
}

//outer bootom loop
for(int i = n; i >= 1; i--){
    for(int j = 1; j <= i; j++){
        cout<<"*";
    }

//count space
    int space = 2*n- 2*i;

    for(int j = 1; j <= space; j++){
        cout<<" ";
    }

    for(int j = 1; j <= i; j++){
        cout<<"*";
    }
    
    //line break
    cout<<endl;
}
*/

// Advanced pattern 

//inverted pattern

/*
int n;
cin>>n;
*/

//Ist way

/*
for(int i = n; i >=1; i--){
    for(int j = 1; j <= i; j++){
        cout<<j<< " ";
    }
    cout<<endl;
}
*/

//teacher way

/*
for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n+1-i; j++){
        cout << j << " ";
    }
    cout << endl;
}
*/

//0-1 pattern

/*
int n;
cin>>n;

for(int i = 1; i <= n; i++){
    for(int j = 1; j <= i; j++){
        if((i+j)%2==0){
            cout<<"1";
        }
        else{
            cout<<"0";
        }
    }
    cout<<endl;
}
*/

//Rhombus pattern

/*
int n;
cin>>n;

for(int i = 1; i <= n; i++){
        for(int k = 1; k <= n-i; k++){
            cout<<" ";
        }
        for(int l = 1; l <= n; l++){
            cout << "* ";
        }
    cout<<endl;
}

*/

// Number pattern

/*

int n;
cin>>n;

for(int i = 1; i <= n; i++){
        for(int k = 1; k <= n-i; k++){
            cout<<" ";
        }
        for(int l = 1; l <= i; l++){
            cout << l << " ";
        }
    cout<<endl;
}

*/

//Palindromic pattern

/*
int n;
cin>>n;

for(int i = 1; i <= n; i++){
    for(int j = n; j >= 1; j--){
        if(i >= j){
            cout << j << " "; 
        }else{
            cout << "  ";
        }
    }
    for(int k = 2; k <= i; k++){
        cout << k << " ";
    }
    cout<<endl;
}
*/

// Star pattern

/*

int n;
cin>>n;

for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n-i; j++){
        cout << "  ";
    }
    for(int k = 1; k <= 2*i-1; k++){
        cout << "* ";
    }
    cout<<endl;
}
for(int i = n; i >= 1; i--){
    for(int j = 1; j <= n-i; j++){
        cout << "  ";
    }
    for(int k = 1; k <= 2*i-1; k++){
        cout << "* ";
    }
    cout<<endl;
}

*/

//Zig-zag pattern

/*
int n;
cin>>n;

for(int i = 1; i <= 3; i++){
    for(int j = 1; j <= n; j++){
        if(((i+j)%4 == 0) || (i == 2 && j%4 == 0)){
            cout << "* ";
        }
        else{
            cout << "  ";
        }
    }
    cout<<endl;
}
*/

//  1*2*3*43
//  9*10*11*12
//  5*6*7*8
//  13*14*15*16
    int n;
    cout << "N value : ";
    cin >> n;
    //int row = 4, col = 4;

    for(int i = 0; i < n; i++){
        for(int j = 1; j <= n; j++){
            int res = n*i+j;
            cout<< res;
            
            if(res%n == 0){
                break;
            }else{
                cout << "*";
            }
        }
        cout<<endl;
    }

    return 0;
}