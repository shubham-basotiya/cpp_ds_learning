#include <iostream>
using namespace std;

/* Start Inverted Pattern

int main()                                                              //1 2 3 4 5
{                                                                       //1 2 3 4
    int row;                                                            //1 2 3 
    cout<<"Enter the number of row : ";                                 //1 2
    cin>>row;                                                           //1
    for(int i = row; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}

End Inverted Pattern */

/* Start 0-1 Pattern 

int main()                                                              //1
{                                                                       //0 1
    int row;                                                            //1 0 1
    cout<<"Enter the number of row : ";                                 //0 1 0 1
    cin>>row;                                                           //1 0 1 0 1
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= i; j++){
            if((i+j)%2 == 0)
            cout<<" 1";
            else
            cout<<" 0";
        }
        cout<<endl;
    } 

    return 0;
}

End 0-1 Pattern */

/* Start Rhombus Pattern

int main()                                                              //    * * * * *
{                                                                       //   * * * * *
    int row;                                                            //  * * * * *    
    cout<<"Enter the number of row : ";                                 // * * * * *
    cin>>row;
    for(int i = 1; i <= row; i++){
        
            for(int k = 1; k <= row - i; k++){
                cout<<" ";
            }
            for(int j = 1; j <= row; j++){
            cout<<"* ";
            }
        cout<<endl;
    }

    return 0;
}

End Rhombus Pattern */

/* Start Number Pattern

int main()                                                              //    1
{                                                                       //   1 2
    int row;                                                            //  1 2 3
    cout<<"Enter the number of row : ";                                 // 1 2 3 4 
    cin>>row;                                                           //1 2 3 4 5
    for(int i = 1; i <= row; i++){
        for(int k = 1; k <= row - i; k++){
            cout<<" ";
        }
        for(int j = 1; j <= i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}

End Number Pattern */

/* Start Palindromic Pattern By Urvi Goel(Online)
int main()                                                              //         1
{                                                                       //       2 1 2
    int row;                                                            //     3 2 1 2 3 
    cout<<"Enter the number of row : ";                                 //   4 3 2 1 2 3 4
    cin>>row;                                                           // 5 4 3 2 1 2 3 4 5        
    for(int i = 1; i <= row; i++){
        int j;
        for(j = 1; j <= row-i; j++){
            cout<<" ";
        }
        int k = i;
        for(; j <= row; j++){
            cout<<k--;
        }
        k = 2;
        for(; j <= row+i-1; j++){
            cout<<k++;
        }
        cout<<endl;
    }

    return 0;
}

End Palindromic Pattern By Urvi Goel(Online)*/

/* Start Palindromic Pattern By Me(Shubham)

int main()                                                              //          1
{                                                                       //        2 1 2 
    int row;                                                            //      3 2 1 2 3
    cout<<"Enter the number of row : ";                                 //    4 3 2 1 2 3 4
    cin>>row;                                                           //  5 4 3 2 1 2 3 4 5
    for(int i = 1; i <= row; i++){
        for(int k = row; k >= 1; k--){
            if(k <= i)
            cout<<k<<" ";
            else
            cout<<"  ";
        }
        for(int k = 2; k <= row; k++){
            if(k <= i)
            cout<<k<<" ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}

End Palindromic Pattern By Me(Shubham) */

/* Start Start Pattern

int main()                                                              //         *
{                                                                       //       * * * 
    int row;                                                            //     * * * * *
    cout<<"Enter the number of row : ";                                 //   * * * * * * *
    cin>>row;                                                           //   * * * * * * *
    for(int i = 1; i <= row; i++){                                      //     * * * * *
        for(int k = 1; k <= row-i; k++){                                //       * * *
            cout<<"  ";                                                 //         *
        }
        for(int j = 1;j<=2*i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i = row; i >= 1; i--){
        for(int k = 1; k <= row-i; k++){
            cout<<"  ";
        }
        for(int j = 1;j<=2*i-1;j++){     // 2*i-1 give us odd number
            cout<<"* ";
        }
        cout<<endl;
    }
}

End Start Pattern */

/* Start Zig-Zag Pattern

int main()                                                              //   *   *   
{                                                                       //  * * * * 
    int  columns;                                                       // *   *   *
    cout<<"Enter the number of columns : ";
    cin>>columns;  // This work only for columns = 9 
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= columns; j++){
            if(((i+j)%4 == 0) || (i == 2 && j % 4 == 0)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

End Zig-Zag Pattern */