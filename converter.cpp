#include<bits/stdc++.h>
// #include <iostream>
// #include <climits>
// #include <string>
using namespace std;

int updateBit(int n, int p, int v){
    int mask = ~(1<<p);
    n = n & mask;
    return (n | (v<<p));
}

// int clearBit(int n, int p){
//     int mask = ~(1<<p);
//     return (n & mask);
// } 

// int setBit(int n, int p){
//     return (n | (1<<p));
// }

// int getBit(int n,int p){
//     return ((n & (1<<p)) != 0);
// }

// void inct(int *a){
//     cout<< a << endl;
//     *a+=1;
//     cout << a << endl;
// }

// int kadane(int arr[], int n){
//     int maxSum = INT_MIN;
//     int sum = 0;
//     for(int i = 0; i < n; i++){
//         sum += arr[i];
//         if(sum < 0){
//             sum = 0;
//         }
//         maxSum = max(sum, maxSum);
//     }
//     return maxSum;
// }

// bool pairSum(int arr[], int n, int ts){
    
    // below worst time complexity - O(n)

    // int low = 0, high = n-1;
    
    // while(low < high){
    //     if(arr[low]+arr[high] == ts){
    //         cout << low << " " << high << endl;
    //         return true;
    //     } else if(arr[low]+arr[high] > ts){
    //         high--;
    //     } else{
    //         low++;
    //     }
    // }
    // return false;

    // below code worst time complexity - O(n^2)

    // for(int i = 0; i < n-1; i++){
    //     for(int j = i+1; j < n; j++){
    //         if(arr[i] + arr[j] == ts){
    //             cout << i << " " << j << endl;
    //             return true; 
    //         }
    //     }
    // }
    // return false;
// }

// int smallestPno(int arr[], int n){
//     int maxItem = INT_MIN;
//     for(int i = 0; i < n; i++){
//         if(arr[i] > maxItem){
//             maxItem = arr[i];
//         }
//     }
//     maxItem +=1;
//     int anotherArr[maxItem];

//     for(int i = 0; i <= maxItem; i++){
//         anotherArr[i] = -1;
//     }

//     for(int j = 0; j < n; j++){
//         if(arr[j] >= 0){
//             anotherArr[arr[j]] = 1;
//         }
//     }
    
//     for(int k = 1; k <= maxItem; k++){
//         if(anotherArr[k] == -1){
//             return k;
//         } 
//     }
//     return -1;
// }
// void sumEsubarr(int arr[], int s, int n){
//     int st = -1, en = -1;
//     int i = 0, j = 0;
//     int ts = 0;

//     while(j < n && arr[j]+ts <= s){
//         ts += arr[j];
//         j++;
//     }

//     if(ts == s){
//         cout << i+1 << " " << j << endl;
//         return;
//     } 
    
//     while(j < n){
//         ts += arr[j];
//         while(ts > s){
//             ts -= arr[i];
//             i++;
//         }

//         if(ts == s){
//             st = i+1;
//             en = j+1;
//             cout << st << " " << en << endl;
//             return;
//         }
        
//     j++;
//     }
// }

// void firstRepeatingElement(int arr[], int n){
//     int minValue = INT_MAX;

//     const int SIZE = 6;//1e6+2;
    
//     int arrIndex[SIZE];

//     for(int i = 0; i < SIZE; i++){
//         arrIndex[i] = -1;
//     }

//     for(int i = 0; i < n; i++){
//         if(arrIndex[arr[i]] != -1){
//             minValue = min(minValue, arrIndex[arr[i]]);
//         } else{
//             arrIndex[arr[i]] = i;
//         }
//     }

//     if(minValue == INT_MAX){
//         cout <<  "-1" << endl;
//     } else {
//         cout << "First Repeating Element : " << minValue << endl; 
//     }
// }

// int RecordBreakingDay(int arr[], int n){
//     int mx = INT_MIN;
//     int ans = 0;
//     for(int i = 0; i < n; i++){
//         if(arr[i] > mx && arr[i] > arr[i+1]){
//             ans++;
//         }
//         mx = max(arr[i], mx);
//     }

//     return ans;
// }

// int longestArithmeticSubarray(int arr[], int n){
//     int pd = arr[1]-arr[0];
//     int ans = 2;
//     int j = 2;
//     int curr = 2;

//     while(j < n){
//         if(pd == arr[j] - arr[j-1]){
//             curr++;
//         } else{
//             pd = arr[j] - arr[j-1];
//             curr = 2;
//         }
//         ans = max(ans, curr);
//         j++;
//     }

//     return ans;
// }

// void sumOfSubarray(int arr[], int n){
//     int counter = 0;
//     for(int i = 0; i < n; i++){
//         int sum = 0;
//         for(int j = i; j < n; j++){
//             sum += arr[j];
//             cout << "sum subarray till " << i << "th = " << sum << endl;
//             counter++;
//         }
//     }
//     cout << "total number of subarray : " << counter << endl;//n*(n+1)/2
// }

// void maxTillIndex(int arr[], int n , int i){
//     int max = INT_MIN;
//         for(int j = 0; j <= i; j++){
//             if(max < arr[j]){
//                 max = arr[j];
//             }
//             cout << j << "th index max number = " << max << endl;
//         }
// }

// void insertSort(int arr[], int n){
//     for(int i = 1; i < n; i++){
//         int current = arr[i];
//         int j = i-1;
//         while(arr[j] > current && j >= 0){
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = current;
//     }
// }

// void bubbleSort(int arr[], int n){
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n-i-1; j++){
//             if(arr[j] > arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
// }

// void selectionSort(int arr[], int n){
//     for(int i = 0; i < n-1; i++){
//         for(int j = i+1; j < n; j++){
//             if(arr[j] < arr[i]){
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }

// int linearSearch(int arr[], int n, int key){
//     for(int i = 0; i < n; i++){
//         if(arr[i] == key){
//             return i;
//         }
//     }

//     return -1;
// }

// int binarySearch(int arr[], int n, int key){
//     int l = 0;
//     int h = n;

//     while(l <= h){

//         int mid = (l+h)/2; 

//         if(arr[mid] == key){
//             return mid;
//         } else if(arr[mid] > key){
//             h = mid-1;
//         } else {
//             l = mid+1;
//         }
//     }

//     return -1;
// }

// int reverse(int ans){
//     int rev = 0;

//     while(ans > 0){
//         int last_digit = ans%10;
//         rev = rev*10+ last_digit;
//         ans = ans/10;  
//     }

//     return rev; 
// }

int main(){
    // int n, decimal = 0, pow = 1;
    // cout << "Enter a binary number : ";
    // cin>>n;
    // while(n > 0){
    //     int last_bit = n%10;
    //     decimal = decimal + last_bit*pow;
    //     n = n/10;
    //     pow *= 2;
    // }

    // cout << "Here's your result look at this : " << decimal << endl; 

    // int bn, binary = 0, base = 1;

    // cout << "Enter a decimal number : ";
    // cin>>bn;

    // while(bn > 0){
    //     int remainder = bn%2;
    //     cout << remainder << endl;
    //     binary = binary + remainder*base;
    //     base *= 10;
    //     bn = bn/2;
    // }

    // cout << "Here's your result look at this : " << binary << endl;

    // int oct, octal = 0, base = 1;

    // cout << "Enter a octal number : ";
    // cin>>oct;


    // while(oct > 0){
    //     int remainder = oct%10;
    //     octal = octal + remainder*base;
    //     base *= 8;
    //     oct = oct/10; 
    // }

    // cout << "Here's your result look at this : " << octal << endl;

    // string hexnum;
    // int ans = 0, base = 1;
    // cout << "Enter a hexadecimal number : ";

    // cin>>hexnum;

    // int hexlen = hexnum.size();

    // cout << "length of string : " << hexlen << endl;

    // for(int i = hexlen-1; i >= 0; i--){
    //     if(hexnum[i] >= '0' && hexnum[i] <= '9'){
    //         ans = ans + (hexnum[i] - '0')*base;
    //     }
    //     if(hexnum[i] >= 'A' && hexnum[i] <= 'F'){
    //         ans = ans + ((hexnum[i]  - 'A') + 10)*base;
    //     }
    //     base *= 16;
    // }

    // cout << "Here's your result look at this : " << ans << endl;


    // int decimal_num;
    // cout << "Enter a decimal number : " ;
    // cin>>decimal_num;

    // int ans = 0, base = 1;

    // //find out 2's pow that < n
    // while(base <= decimal_num){
    //     base *= 2;
    // }

    // base/=2;

    // while(base > 0){
    //     int last_digit = decimal_num/base;
    //     decimal_num = decimal_num - last_digit*base;
    //     base /= 2;
    //     ans = ans*10 + last_digit;
    // }

    // cout<<"Here's your result look at this : " << ans << endl;

    // int decimal_num;
    // cout<< "Enter a decimal number : ";
    // cin>>decimal_num;

    // int binary_num[10];
    // int base = 0;

    // while(decimal_num != 0){
    //     binary_num[base] = decimal_num%2;
    //     base++;
    //     decimal_num = decimal_num/2; 
    // }

    // cout<< "Here's your result look at this : ";
    // for(base-=1;base >= 0; base--){
    //     cout << binary_num[base];
    // }

    // int decimal_num;
    // cout << "Enter a decimal number : " ;
    // cin>>decimal_num;

    // int ans = 0, base = 1;

    // //find out 2's pow that < n
    // while(base <= decimal_num){
    //     base *= 8;
    // }

    // base/=8;

    // while(base > 0){
    //     int last_digit = decimal_num/base;
    //     decimal_num = decimal_num - last_digit*base;
    //     base /= 8;
    //     ans = ans*10 + last_digit;
    // }

    // cout<<"Here's your result look at this : " << ans << endl;

    // int decimal_num;
    // cout << "Enter a decimal number : " ;
    // cin>>decimal_num;
    // int base = 1;
    // string ans = "";

    // // find out 2's pow that < n
    // while(base <= decimal_num){
    //     base *= 16;
    // }

    // base/=16;

    // while(base > 0){
    //     int last_digit = decimal_num/base;
    //     decimal_num = decimal_num - last_digit*base;
    //     base /= 16;
        
    //     if(last_digit <= 9){
    //         ans = ans + to_string(last_digit);
    //     }
    //     else{
    //         char c = 'A' + last_digit - 10;
    //         ans.push_back(c);
    //     }
    // }

    // cout<<"Here's your result look at this : " << ans << endl;

    // int bn1, bn2;

    // cout<<"Enter two binary number's : ";
    // cin>>bn1>>bn2;
    // int ans = 0, prevCarry = 0;
    // while(bn1 > 0 && bn2 > 0){
    //     if(bn1*2 == 0 && bn2%2 == 0){
    //         ans = ans*10 + prevCarry;
    //         prevCarry = 0;
    //     }
    //     else if((bn1%2 == 1 && bn2%2 == 0) || (bn1%2 == 0 && bn2%2 == 1)){
    //         if(prevCarry == 1){
    //             ans = ans*10 + 0;
    //             prevCarry = 1;
    //         } else{
    //             ans = ans*10 + 1;
    //             prevCarry = 0;
    //         }
    //     }
    //     else{    
    //         ans = ans*10 + prevCarry;
    //         prevCarry = 1;
    //     }

    //     bn1 = bn1/10;
    //     bn2 = bn2/10;
    // }

    // while(bn1 > 0){
    //     if(prevCarry == 1){
    //         if(bn1%2 == 1){
    //             ans = ans*10 + 0;
    //             prevCarry = 1;
    //         } else{
    //             ans = ans* 10 + 1;
    //             prevCarry = 0;
    //         }
    //     } else {
    //         ans = ans * 10 + (bn1%2);
    //     }
    //     bn1 = bn1/10;
    // }

    // while(bn2 > 0){
    //     if(prevCarry == 1){
    //         if(bn2%2 == 1){
    //             ans = ans*10 + 0;
    //             prevCarry = 1;
    //         } else{
    //             ans = ans* 10 + 1;
    //             prevCarry = 0;
    //         }
    //     } else {
    //         ans = ans * 10 + (bn2%2);
    //     }
    //     bn2 = bn2/10;
    // }

    // if(prevCarry == 1){
    //     ans = ans*10 + 1;
    // }

    // cout << "Here's your result but you need to reverse this value : " << ans << endl;

    // cout << "Here's your result look at this : " << reverse(ans);

    // int n;
    // cout <<"Enter the size of array : ";
    // cin>>n;
    // int arr[n];

    // cout << "given array values : ";
    // for(int i = 0; i < n; i++){
    //     cin>>arr[i];
    // }

    // int max_int = INT_MIN;
    // int min_int = INT_MAX;

    // for(int i = 0; i < n; i++){
    //     // max_int = max(max_int, arr[i]);
    //     // min_int = min(min_int, arr[i]);

    //     if(arr[i]  > max_int){
    //         max_int = arr[i];
    //     }
    //     if(arr[i] < min_int){
    //         min_int = arr[i];
    //     }
    // }
    // cout<<"Max int = " << max_int << " and Min int = " << min_int << endl;

    // int n;
    
    // cout << "Enter the size of array : ";
    // cin>>n;

    // int arr[n];

    // for(int i = 0; i < n; i++){
    //     cin>>arr[i];
    // }

    // int key;
    // cout << "Enter the value that you want to search : ";
    // cin>>key;

    // cout << linearSearch(arr, n, key);

    // int n;
    
    // cout<<"Enter the size of array : ";
    // cin>>n;

    // int arr[n];

    // cout << "Insert values into array : ";

    // for(int i = 0; i < n; i++){
    //     cin>>arr[i];
    // }

    // selectionSort(arr, n);
    // bubbleSort(arr, n);
    // insertSort(arr, n);

    // int i;

    // cout << "Enter the index number for 0 to ith : ";
    // cin>>i;

    // if(i<=n){
    //     maxTillIndex(arr, n , i);
    // }
    //  else{
    //     cout << "Please enter correct index number means index <= size of array" << endl;
    // }

    // for(int i = 0; i < n; i++){
    //     cout<< arr[i] << " ";
    // }

    // cout << "print sum of all subarray of an array : " << endl;

    // sumOfSubarray(arr, n);

    // cout << "Longest Arithmetic Subarray :- " << longestArithmeticSubarray(arr, n) << endl;
    
    // int n;
    
    // cout<<"Enter the size of array : ";
    // cin>>n;

    // int arr[n+1];

    // arr[n] = -1;

    // cout << "Insert values into array : ";

    // for(int i = 0; i < n; i++){
    //     cin>>arr[i];
    // }

    // cout << "Record Breaking Days : " << RecordBreakingDay(arr, n+1);

    // int n;
    
    // cout << "Enter the size of array : ";
    // cin>>n;

    // int arr[n];

    // for(int i = 0; i < n; i++){
    //     cin>>arr[i];
    // }

    // firstRepeatingElement(arr, n);

    // int n, s;
    
    // cout << "Enter the size of array : ";
    // cin>>n;

    // cout << "Enter the sum : ";
    // cin>>s;

    // int arr[n];

    // for(int i = 0; i < n; i++){
    //     cin>>arr[i];
    // }

    // sumEsubarr(arr, s, n);

    // int n;
    
    // cout << "Enter the size of array : ";
    // cin>>n;

    // int arr[n];

    // for(int i = 0; i < n; i++){
    //     cin>>arr[i];
    // }

    // cout << "Smallest Positive Number : " << smallestPno(arr, n);

    // int n;
    
    // cout << "Enter the size of array : ";
    // cin>>n;

    // int arr[n];

    // for(int i = 0; i < n; i++){
    //     cin>>arr[i];
    // }

    // int maxSum = INT_MIN;
    // for(int i = 0; i< n; i++){
    //     for(int j = i ; j < n; j++){
    //         int sum = 0;
    //             for(int k = i; k <= j; k++){
    //                     sum += arr[k];
    //                     cout << arr[k] << " ";
    //             }
    //         cout << " - " << sum << endl;
    //         if(maxSum <= sum){
    //             maxSum = max(sum, maxSum);
    //         }
    //     }
    // }

    // int n;
    
    // cout << "Enter the size of array : ";
    // cin>>n;

    // int arr[n];

    // for(int i = 0; i < n; i++){
    //     cin>>arr[i];
    // }

    // int cumulative_sum[n];

    // cumulative_sum[0] = 0;

    // for(int i = 1; i <= n; i++){
    //     cumulative_sum[i] = cumulative_sum[i-1] + arr[i-1];
    // }

    // for(int i = 1; i <= n; i++){
    //     cout << cumulative_sum[i] << " ";
    // }

    // int maxSum = INT_MIN;

    // for(int i = 1; i <= n; i++){
    //     int sum = 0;
    //     for(int j = 0; j < i; j++){
    //         sum = cumulative_sum[i] - cumulative_sum[j];
    //         // cout << sum << endl;
    //         maxSum = max(sum, maxSum);
    //     }
    // }

    // cout << "Maximum subarray sum = " << maxSum << endl;

    // int n;
    
    // cout << "Enter the size of array : ";
    // cin>>n;

    // int arr[n];

    // for(int i = 0; i < n; i++){
    //     cin>>arr[i];
    // }

    // int sum = 0;

    // int maxSum = INT_MIN;

    // for(int i = 0; i < n; i++){
    //     sum += arr[i];
    //     if(arr[i] < 0){
    //         sum = 0;
    //     }
    //     maxSum = max(sum, maxSum);
    // }
    
    // cout << maxSum << endl;

    // int n;
    
    // cout << "Enter the size of array : ";
    // cin>>n;

    // int ts;
    // cout<< "Enter the pair sum : ";
    // cin>>ts;

    // int arr[n];

    // cout << "Enter sort value into array : ";

    // for(int i = 0; i < n; i++){
    //     cin>>arr[i];
    // }

    // cout << pairSum(arr, n, ts);

    // int n;
    
    // cout << "Enter the size of array : ";
    // cin>>n;

    // int arr[n];

    // for(int i = 0; i < n; i++){
    //     cin>>arr[i];
    // }

    // int nonwrapsum;
    // int wrapsum;

    // nonwrapsum = kadane(arr, n);

    // int ts = 0;
    // for(int i = 0; i < n; i++){
    //     ts += arr[i];
    //     arr[i] = -arr[i];
    // }

    // wrapsum = ts + kadane(arr, n);

    // int ans = 0;

    // ans = max(wrapsum, nonwrapsum);

    // cout << ans << endl;

    // int n, m;

    // cout << "Enter value of 2-D matrix :";
    // cin>>n>>m;

    // int arr[n][m];

    // cout << "enter value into 2-D " << n << " * " << m << " matrix : ";
    
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         cin>>arr[n][m];
    //     }
    // }

    // int row_start = 0, row_end = n-1, col_start = 0, col_end = m-1;

    // while(row_start <= row_end && col_start <= col_end)
    // {
    //     // row start

    //     for(int col = col_start; col <= col_end; col++){
    //         cout << arr[row_start][col] << " ";
    //     }
    //     row_start++;

    //     // colum end

    //     for(int row = row_start; row <= row_end; row++){
    //         cout << arr[row][col_end] << " ";
    //     }
    //     col_end--;

    //     // row end

    //     for(int col = col_end; col >= col_start; col--){
    //         cout << arr[row_end][col] << " ";
    //     }
    //     row_end--;

    //     // col_start

    //     for(int row = row_end; row >= row_start; row--){
    //         cout << arr[row][col_start] << " ";
    //     }
    //     col_start++;
    // }

    // int n, m;

    // cout << "Enter value of 2-D matrix :";
    // cin>>n>>m;

    // int arr[n][m];

    // cout << "enter value into 2-D " << n << " * " << m << " matrix : ";
    
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         cin>>arr[n][m];
    //     }
    // }

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         if(i < j){
    //             int temp = arr[i][j];
    //             arr[i][j] = arr[j][i];
    //             arr[j][i] = temp;
    //         }
    //         cout << arr[i][j] << " ";
    //     }
    //     cout<<endl;
    // }
/*
    int n, o, m;

    cout << "Enter value of 2-D matrix :";
    cin>>n>>o>>m;

    int arr1[n][o];
    int arr2[o][m];
    int res[n][m];

    cout << "enter value into 2-D " << n << " * " << m << " matrix : ";
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < o; j++){
            cin>>arr1[i][j];
        }
    }

    for(int i = 0; i < o; i++){
        for(int j = 0; j < m; j++){
            cin>>arr1[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            res[i][j] = 0;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            for(int k = 0; k < o; k++){
                res[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
    }


    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << res[i][j] << " ";
        }
        cout<<endl;
    }
*/

    // searching an item in sorted square matrix

    // int n,m;
    // cout<< "Enter row and column :";
    // cin>>n>>m;

    // int arr[n][m];

    // cout<<"Please enter item in sorted form : ";

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         cin>>arr[i][j];
    //     }
    // }

    // int r = 0, c = m-1, item;
    // cout << "Enter the number that you want to search in sorted square matrix : ";
    // cin>>item;

    // bool found = 0;
    // while(r < n && c >= 0){
    //     if(arr[r][c] == item){
    //         found = 1;
    //     } else if(arr[r][c] > item){
    //         c--;
    //     } else{
    //         r++;
    //     }
    // }

    // if(found){
    //     cout<<"element found";
    // } else{
    //     cout<<"element not found";
    // }

    // char arr[100] = "i am shubham sharma from india.";
    // int i = 0;

    // while(arr[i] != '\0'){
    //     cout << arr[i];
    //     i++;
    // }

    // char arr[100];
    // cin>>arr;

    // cout<<arr<<endl;

    // check palindrom

    // int n;
    // cin>>n;
    // char arr[n+1];
    // cin>>arr;
    
    // bool check = 1;
    // for(int i = 0; i < n; i++){
    //     if(arr[i] != arr[n-1-i]){
    //         check = 0;
    //         break;
    //     }
    // }

    // if(check){
    //     cout << "palindrome";
    // } else{
    //     cout << "not palindrome";
    // }

    // int n;
    // cin>>n;
    // cin.ignore();
    // char arr[n+1];
    // cin.getline(arr, n);
    // cin.ignore();

    // int maxlen = INT_MIN;
    // int i = 0, curlen = 0;
    // int wd_st = 0, wd_ed = 0;
    // while(1){
    //     if(arr[i] == ' ' || arr[i] == '\0'){
    //         if(curlen > maxlen){
    //             maxlen = max(curlen, maxlen);
    //             wd_ed = wd_st;
    //         }
    //         curlen = 0;
    //         wd_st = i+1;
    //     }else{
    //         curlen++;
    //     }

    //     if(arr[i] == '\0'){
    //         break;
    //     }
    //     i++;
    // }

    // cout << maxlen << endl;

    // for(int i = 0; i < maxlen; i++){
    //     cout<< arr[i+wd_ed];
    // }

    // string str;
    // cin>>str;
    // cout<<str<<endl;

    // string str(5,'a');
    // cout<<str<<endl;

    // string s1 = "fampoopcompoop"; 
    // string s2 = "fam";

    // s1.insert(3, "lol");
    // cout << s1.size() << endl;

    // for(int i = 0; i < s1.length();i++){
    //     cout << s1[i] << endl;
    // }

    // string str = "550";
    // cout<< stoi(str) << sizeof(str) << endl; 

    // int x = 560;
    // cout<<to_string(x)+"2"<<endl;

    // string str = "asrtynvfgd";
    // sort(str.begin(), str.end());
    // cout<< str << endl;

    // string str = "asdfdf";

    // for(int i = 0; i < str.size(); i++){
    //     if(str[i] >= 'a' && str[i] <= 'z'){
    //         str[i] -= 32;
    //     }
    // }
    // cout<<str<<endl;

    // for(int i = 0; i < str.size(); i++){
    //     if(str[i] >= 'A' && str[i] <= 'Z'){
    //         str[i] += 32;
    //     }
    // }
    // cout<<str<<endl;
    // transform(str.begin(), str.end(), str.begin(), ::toupper);
    // cout<<str << endl;
    // transform(str.begin(), str.end(), str.begin(), ::tolower);
    // cout<<str << endl;

    // string str = "879245";

    // sort(str.begin(), str.end(), greater<char>());

    // cout << str << endl;

    // string str = "aaaaasfdtrtgtdgt";

    // int freq[26];

    // for(int i = 0; i < 26; i++){
    //     freq[i] = 0;
    // }

    // for(int i = 0; i < str.size(); i++){
    //     freq[str[i]-'a']++;
    // }

    // char ans = 'a';
    // int maxFq = 0;

    // for(int i = 0; i < 26; i++){
    //     if(freq[i] > maxFq){
    //         maxFq = freq[i];
    //         ans = i+'a';
    //     }
    // }

    // cout << maxFq<< " " << ans << endl;

    // int arr[] = {10, 20, 30};
    // cout<< arr <<" "<< *arr << endl;
    // cout<< arr+1 <<" "<< *(arr+1) << endl;
    // cout<< arr+2 <<" "<< *(arr+2) << endl;
    // cout<< arr+3 <<" "<< *(arr+3) << endl;

    // int *ptrarr = arr;

    // for(int i = 0; i < 3; i++){
    //     cout<< *(ptrarr)+i << endl;
    // }

    // int a = 2;
    // inct(&a);
    // cout<< a << endl;

    // cout << ~-4 << endl;

    // cout << getBit(5,2) << endl;

    // cout << setBit(5, 1) << endl
    
    // // cout << clearBit(5,2) << endl;

    // cout << updateBit(5, 1, 1) << endl;
    // return 0;
}