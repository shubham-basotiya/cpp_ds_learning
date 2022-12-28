#include <bits/stdc++.h>
using namespace std;

/* Start Input and Output of Two Dimensional Array 

int main()
{
    int r, c;

    cout << "Enter the row and column of Matrix : ";
    cin>>r>>c;

    int mat[r][c];

    cout << "Enter the values for " << r << " rows and " << c << " columns : " << endl;

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin>>mat[i][j];
        }
    }

    cout << "Matrix : " << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout<<endl;
    }
    
    return 0;
}

End Input and Output of Two Dimensional */

/* Start Searching in Two Dimensional Array

int main()
{
    int r, c, k;

    cout << "Enter the row and column of Matrix and Search element : ";
    cin>>r>>c>>k;

    int mat[r][c];

    cout << "Enter the values for " << r << " rows and " << c << " columns : " << endl;

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin>>mat[i][j];
        }
    }

    cout << "Result : ";
    bool flag = false;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(mat[i][j] == k){
                cout << "Element position row = " << i+1 << " and column = " << j+1 << endl;
                flag = true;
            }
        }
    }
    
    if(flag != true){
        cout << "Element not found in Matrix" << endl;
    }

    return 0;
}

End Searching in Two Dimensional Array */

/* Start Print Matrix in Spiral Order Traversal

int main()
{
    int r, c;

    cout << "Enter the row and column of Matrix : ";
    cin>>r>>c;

    int mat[r][c];

    cout << "Enter the values for " << r << " rows and " << c << " columns : " << endl;

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin>>mat[i][j];
        }
    }

    cout << "Matrix : " << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout<<endl;
    }

    cout << "Spiral Order Matrix Traversal :" << endl;

    int row_start = 0, row_end = r-1, column_start = 0, column_end = c-1;

    while (row_start <= row_end && column_start <= column_end)
    { 
        // for row_start
        for(int col = column_start; col <= column_end; col++){
            cout << mat[row_start][col] << " ";    
        }
        row_start++;

        // for column_end
        for(int row = row_start; row <= row_end; row++){
            cout << mat[row][column_end] << " ";    
        }
        column_end--;

        // for row_end
        for (int col = column_end; col >= column_start; col--)
        {
            cout << mat[row_end][col] << " ";
        }
        row_end--;

        // for col_start
        for (int row = row_end; row >= row_start; row--)
        {
            cout << mat[row][column_start] << " ";
        }
        column_start++;
    } 
    
    return 0;
}

End Print Matrix in Spiral Order Traversal */

/* Start Way I Matrix Transpose in O(n^2 ya r*c) Time Complexity and O(n^2) Space Complexity for new matT matrix 

int main()
{
    int r, c;

    cout << "Enter the row and column of Matrix : ";
    cin>>r>>c;

    int mat[r][c];

    int tran_mat[c][r];
    cout << "Enter the values for " << r << " rows and " << c << " columns : " << endl;

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin>>mat[i][j];
        }
    }

    cout << "Matrix : " << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout<<endl;
    }

    // transpose matrix logic
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            tran_mat[j][i] = mat[i][j];
        }
    }

    cout << "Transpose of Matrix :" << endl;

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << tran_mat[i][j] << " ";
        }
        cout<<endl;
    }
    
    return 0;
}

End Way I Matrix Transpose in O(n^2 ya r*c) Time Complexity and O(n^2) Space Complexity for new matT matrix*/

/* Start Way II matrix Transpose in O(n^2 ya r*c) Time Complexity

int main()
{
    int r, c;
    cout << "Enter the size of row and column of a 2D Matrix : ";
    cin>>r>>c;

    int mat[r][c];
    int matT[c][r];

    cout << "Enter the values for " << r << " rows and " << c << " columns : " << endl;

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin>>mat[i][j];
        }
    }

    cout << "Matrix : " << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout<<endl;
    }

    // transpose matrix logic
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(r == c){
            matT[i][j] = mat[i][j];
            }
            else{
                matT[i][j] = mat[j][i];
            }
        }
    }

    cout << "Transpose of Matrix :" << endl;

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << matT[i][j] << " ";
        }
        cout<<endl;
    }

    
}

End Way II Matrix Transpose in O(n^2 ya r*c) Time Complexity */

/* Start Way III Matrix Transpose in O(n^2 ya r*c) Time Complexity and O(n) Space Complexity without new matT Matrix of * Square Matrix means row == column

int main()
{
    int r, c;
    cout << "Enter the size of row and column of a 2D Matrix : ";
    cin>>r>>c;

    int mat[r][c];

    cout << "Enter the values for " << r << " rows and " << c << " columns : " << endl;

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin>>mat[i][j];
        }
    }

    cout << "Matrix : " << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout<<endl;
    }

    // transpose matrix logic

    for(int i = 0; i < r; i++){
        for(int j = i; j < c; j++){
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }

    cout << "Transpose Matrix : " <<endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout<<endl;
    }

    return 0;
}
End Way III Matrix Transpose in O(n^2 ya r*c) Time Complexity and O(n) Space Complexity without new matT Matrix of * Square Matrix means row == column */

/* Start Matrix Multiplication in O(n^3 ya r1*c1*c2) Time Complexity

int main()
{
    int r1,c1,r2,c2;
    cout << "Enter the size of row and column for First Matrix : ";
    cin>>r1>>c1;

    int mat1[r1][c1];

    cout << "Enter the values for " << r1 << " rows and " << c1 << " columns : " << endl;

    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            cin>>mat1[i][j];
        }
    }

    cout << "*Note : for matrix multiplication : (n1 * m1) order of matrix First is must equal to (n2 * m2) where m1 == n2" << endl; 
    cout << "=> try to remember this thing at the time of second matrix order declartion" << endl;

    cout << "Enter the size of row and column for Second Matrix : ";
    cin>>r2>>c2;

    int mat2[r2][c2];
    
    cout << "Enter the values for " << r2 << " rows and " << c2 << " columns : " << endl;

    for(int i = 0; i < r2; i++){
        for(int j = 0; j < c2; j++){
            cin>>mat2[i][j];
        }
    }

    int mul_mat[r1][c2];

    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
            mul_mat[i][j] = 0;
        }
    }

    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
            for(int k = 0; k < c1; k++){
                mul_mat[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    cout << "Multiplication of mat1 and mat2 is : " << endl;

    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
            cout << mul_mat[i][j] << " ";
        }
        cout<<endl;
    }

    return 0;
}

End Matrix Multiplication in O(n^3) Time Complexity */

/* Start Searching Element in 2D Matrix in O(rc) [Using Linear Searching]Time Complexity

int main()
{
    int r, c, k;
    cout << "Enter the size of row and column of a 2D Matrix and enter the element that you want search : ";
    cin>>r>>c>>k;

    int mat[r][c];

    cout << "Enter the values for " << r << " rows and " << c << " columns : " << endl;

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin>>mat[i][j];
        }
    }

    cout << "Matrix : " << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout<<endl;
    }

    cout << "Search Result : ";
    int flag = false;

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(mat[i][j] == k){
                flag = true;
            }
        }
    }

    if(flag){
        cout << "Searched Element is found in 2D Matrix" <<endl;
    }
    else{
        cout << "Searched Element is not found in 2D Matrix" << endl;
    }

    return 0;
}

End Searching Element in 2D Matrix in O(rc) [Using Linear Searching]Time Complexity */

/* Start Searching Element in 2D Matrix in fast way

int main()
{
    int r, c, k;
    cout << "Enter the size of row and column of a 2D Matrix and enter the element that you want search : ";
    cin>>r>>c>>k;

    int mat[r][c];

    cout << "Enter the values for " << r << " rows and " << c << " columns and ** row and column both increasing order ** : " << endl;

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin>>mat[i][j];
        }
    }

    cout << "Matrix : " << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout<<endl;
    }

    int flag = false;
    
    int row = 0, col = c-1;

    while (row < r && col >= 0)
    {
        if(mat[row][col] == k){
            flag = true;
        }
        else if(mat[row][col] > k){
            col--;
        }
        else{
            row++;
        }
    }
    
    if(flag){
        cout << "Searched Element is found in 2D Matrix" << endl;
    }
    else{
        cout << "Searched Element is not found in 2D Matrix" << endl;
    }

    return 0;
}

End  Searching Element in 2D Matrix in fast way */
