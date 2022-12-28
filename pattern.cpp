#include <iostream>
using namespace std;

/* Start rectagle pattern 

int main()                                                                                  //* * * *
{                                                                                           //* * * *
    int row, column;                                                                        //* * * *
    cout<<"Enter the number of row and columns : ";                                         //* * * *
    cin>>row>>column;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

End rectagle pattern */

/* Start Hollow rectagle pattern

int main()                                                                                  //* * * *
{                                                                                           //*     *
    int row, column;                                                                        //*     *
    cout<<"Enter the number of row and column : ";                                          //*     *
    cin>>row>>column;                                                                       //* * * *

    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= column; j++){
            if(i == 1 || i == row || j == 1 || j == column){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}

End Hollow rectagle */

/* Start Inverted Half Pyramid

int main()                                                                                     //* * * * *
{                                                                                              //* * * *
    int row;                                                                                   //* * *
    cout<<"Enter the number of the row : ";                                                    //* *
    cin>>row;                                                                                  //*
    for(int i = row; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout<<"* ";
        }
    cout<<endl;
    }

    return 0;
}

End Inverted Half Pyramid */

/* Start Half Pyramid After 180 degree Rotation

int main()                                                                                      //        *
{                                                                                               //      * *
    int row;                                                                                    //    * * *
    cout<<"Enter the number of row : ";                                                         //  * * * *
    cin>>row;                                                                                   //* * * * *
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= row; j++){
            if(j <= row-i){
            cout<<"  ";
            }
            else{
            cout<<"* ";
            }
        }
        cout<<endl;
    }
}

End Half Pyramid After 180 degree Rotation */

/* Start Half Pyramid Using Numbers

int main()                                                                                      //1
{                                                                                               //2 2
    int row;                                                                                    //3 3 3
    cout<<"Enter the number of row : ";                                                         //4 4 4 4
    cin>>row;                                                                                   //5 5 5 5 5
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= i; j++){
            cout<<i <<" ";
        }
        cout<<endl;
    }
}

End Half Pyramid Using Numbers */

/* Start Floyd's Triangle

int main()                                                                                      //1
{                                                                                               //2  3
    int row, counter = 1;                                                                       //4  5  6                
    cout<<"Enter the number of row : ";                                                         //7  8  9  10
    cin>>row;                                                                                   //11 12 13 14 15
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= i; j++){
            cout<<counter<<" ";
            counter++;
        }
        cout<<endl;
    }
}

End Floyd's Triangle */

/* Start Butterfly Pattern

int main()                                                                                      //*      *
{                                                                                               //**    **
    int row;                                                                                    //***  ***
    cout<<"Enter the number of row : ";                                                         //********
    cin>>row;                                                                                   //********
    for(int i = 1; i <= row; i++){                                                              //***  ***
        for(int j = 1; j <= i; j++){                                                            //**    **
            cout<<"*";                                                                          //*      *
        }
        int space = 2*row - 2*i;
        for(int k = 1; k <= space; k++){
            cout<<" ";
        }
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = row; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        int space = 2*row - 2*i;
        for(int k = 1; k <= space; k++){
            cout<<" ";
        }
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

End Butterfly Pattern */