#include <bits/stdc++.h>
using namespace std;

/* Start Given an arr[] of size n. For every i from 0 to n-1 output max(a[0],a[1],...,a[i]).

int main()
{
    int n;
    cout << "Enter the size of array and get max till i : ";
    cin>>n;

    int arr[n];

    cout << "Enter "<< n <<" values in the array :";
    
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout << "max till i :" << endl;

    int mx = -1999999;

    for(int i = 0; i < n; i++){
        mx = max(mx, arr[i]);
        cout << mx << " ";
    }    

    return 0;
}

End Given an arr[] of size n. For every i from 0 to n-1 output max(a[0], a[1],...,a[i]). */

/* Start Given an arr[] of size n. Output sum of each subarray of the given array.

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter " << n << " values in array : ";

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    } 

    cout << "Sum of all Subarrays : " << endl;          //if array size = n then total number subarray of size n is n*(n+1)/2

    for (int i = 0; i < n; i++)                         // n = 5
    {                                                    // total subarray = n*(n+1)/2  
        int sum = 0;                                    // => 5*(5+1)/2 
        for (int j = i; j < n; j++)                     // => 5*6/2
        {                                               // => 5*3
            sum += arr[j];                              // => 15
            cout << sum << " ";
        }
        cout << endl;
    }
    
    return 0;
}

End  Given an arr[] of size n. Output sum of each subarray of the given array. */

/* Start Longest Arithematic Subarray 

int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];

    cout<<"Enter " << n <<" values in array :";

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int ans = 2; // here we init. ans with 2 we know how to get result from subtract(Two number make subtract result for one result). Think

    int precommon = arr[1] - arr[0]; // precommon differenc variable store starting common, why beacause compaire this with next element in array and increment current
    int j = 2; // we start loop from 2 position beacause we are already take init. get (precommon difference) and compaire it with next common   
    int current = 2; // here we init. current with 2 we know how to get result from subtract(Two number make subtract result for one result). Think

    while (j < n)                                   // example      10 7 4 6 8 10 11
    {                                               // difference     ^ ^ ^ ^ ^  ^
        if(precommon == (arr[j] - arr[j-1])){       //                -3 -3 2 2 2 1  *first -3 we already take it as precommon differenec variable so thats 
            current++;                              //                                why we start loop from 2nd position and current variable also inti. with 2.
        }                                           //                                here we take current 2 beacause  with help of two number make one subtract result 
        else{                                       //                                here we are count numbers not subtract results , like 2 2 2 three numbers but make
            precommon = (arr[j] - arr[j-1]);        //                                this 3's 2 with help of 4 number as you can see above subarray 4 6 8 10 length is 4 so answer is 4.
            current = 2;
        }

        ans = max(ans, current);

        j++;
    }
    cout << "Longest Arithematic subarray : " << ans << endl;

    return 0;
}

End Longest Arithematic Subarray */

/* Start given an array of size n. find current max >a[i] && a[i] > a[i + 1] at this condition

int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n+1]; // size n+1 because i'th element i+1 comparision

    arr[n] = -1; // always last element -1 means we only use it for comparision it doesn't effect on the program

    cout<<"Enter " << n << " values in array : ";

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    if(n == 1){
        cout<< "1" <<endl;
        return 0;// for main function, stop execution
    }

    int ans = 0;
    int mx = -1;

    for(int i = 0; i < n; i++){
        if(mx < arr[i] && arr[i] > arr[i + 1]){
            mx = max(mx, arr[i]);
            cout<<"Visitor in day " << i+1 << " is = " << mx << endl;
            ans++;
        }
    }

    cout << "Total Record Breaking days is " << ans << endl;

    return 0;
}

End given an array of size n. find current max >a[i] && a[i] > a[i + 1] at this condition */

/* Start First Repeating Element 
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin>>n;

    int arr[n];
    cout << "Enter " << n <<" values in array : ";
    
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    const int N = 1e4+2;
    int idx[N];

    for(int i= 0; i < N; i++){
        idx[i] = -1; 
    }

    int min_idx = INT_MAX;
                                                    //         4       2    3      2       3    
    for (int i = 0; i < N; i++)                     //      arr[0]- arr[1]-arr[2]-arr[3]-arr[4]
    {                                               //      ^        ^     ^      ^       ^
        if(idx[arr[i]] != -1){                      //mindix[4] - mindix[2]-mindix[3] ... repeating elemet first compaire with condition 
            min_idx = min(min_idx, idx[arr[i]]);    //     ^        ^           ^    
        }                                           //     0        1           2
        else{
            idx[arr[i]] = i;
        }
    }
    
    if(min_idx == INT_MAX){
        cout << "-1" <<endl;
    }

    else{
        cout << min_idx+1 <<endl;
    }
    
    return 0;
    
}

End First Repeating Element */

/* Start Subarray with give sum

int main()
{
    int n, sum;
    cout << "Enter the size of array and sum that find in subarray sum : ";
    cin>>n>>sum;                
                                                            // array = 1 2 3 7 7 and sum = 12
    int arr[n];                                             // subarray start with index 2 till end with index 4, subarray = 2 3 7 is = 12
                                                            // answer strat index and end index = 2  4 you can see above lines
    cout << "Enter " << n <<" values in array : ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int start_iterator = 0, end_iterator = 0, answer_start_index = -1, answer_end_index = -1, currentSum = 0;

    while (end_iterator < n && currentSum+arr[end_iterator] <= sum)
    {
        currentSum += arr[end_iterator];
        end_iterator++;
    }

    if(currentSum == sum){
        cout <<  start_iterator+1 << " " << end_iterator << endl;
        return 0; // to stop exeution main function  
    }

    while (end_iterator < n)
    {
        currentSum += arr[end_iterator];
        while (currentSum > sum)
        {
            currentSum -= arr[start_iterator];
            start_iterator++;
        }

        if(currentSum == sum){
            answer_start_index = start_iterator+1;
            answer_end_index = end_iterator+1;
            break;
        }

        end_iterator++;
    }
    
    cout << answer_start_index << " " << answer_end_index << endl;

    return 0;
}

End Subarray with given sum */

/* Start Smallest Positive Missing Number

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin>>n;

    int arr[n];

    cout << "Enter " << n << " values in array :";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    const int N = 1e4+2;
    bool idx[N];

    for (int i = 0; i < N; i++)
    {
        idx[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        if(arr[i] >= 0){
            idx[arr[i]] = 1;
        }
    }
    
    int ans = -1;

    for(int i = 1; i < N; i++){
        if(idx[i] == 0){
            ans = i;
            break;
        }
    }

    cout << ans << endl;
    
    return 0;
}

End Smallest Positive Missing Number */

/* Start Print All Posible Subarrays of Array 

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin>>n;

    int arr[n];

    cout << "Enter " << n <<" values in array : ";

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    } 

    cout << "You can see all the subarray's of array : " << endl;

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            for(int k = i; k <=j; k++){
                cout << arr[k] << " ";
            }
             cout << endl;
        }
       
    }

    return 0;
}

End Prist All Posible Subarrays of Array */

/* Start Maximum Subarray Sum (Using Brute Force Approch) in O(n^3) Time Complexity

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin>>n;

    int arr[n];

    cout << "Enter " << n <<" values in array : ";

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    } 

    int mx = INT_MIN;

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int currentSum = 0;
            for(int k = i; k <=j; k++){
                currentSum += arr[k];
            }
             mx = max(mx, currentSum);
        }
    }

    cout << "Maximum Subarray Sum : " << mx << endl;

    return 0;
}

End Start Maximum Subarray Sum (Using Brute Force Approch) in O(n^3) Time Complexity */

/* Start Maximum Subarray Sum (Using cumulative sum approch) in O(n^2) Time Complexity

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin>>n;

    int arr[n];

    cout << "Enter " << n << " in values in array : ";

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int currentsum[n+1];

    currentsum[0] = 0;

    for(int i = 1; i <=n; i++){
        currentsum[i] = currentsum[i-1] + arr[i-1];
    }

    int mx = INT_MIN;

    for (int i = 1; i <= n; i++)
    {
        int currentSum = 0;
        for(int j = 0; j < i; j++){
            currentSum = currentsum[i] - currentsum[j];
            mx = max(mx, currentSum);
        }
    }
    
    cout << "Maximum Subarray sum : " << mx << endl;

    return 0;
}

End Maximum Subarray Sum (Using cumulative sum approch) in O(n^2) Time Complexity */

/* Start Maximum Subarray Sum(Using Kadane's Algorithm) in O(n) Time Complexity

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter " << n << " values in array : ";

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    } 

    int mx = INT_MIN;       
    
    int currentSum = 0;

    for (int i = 0; i < n; i++)                          
    {

            currentSum += arr[i];   
            if(currentSum < 0){
                currentSum = 0;
            }                          
            mx = max(mx, currentSum);
    }
    
    cout << "Maximum Subarray Sum : " << mx << endl;
    return 0;
}

End Maximum Subarray Sum(Using Kadane's Algorithm) in O(n) Time Complexity */

/* Start Pair Sum Problem in O(n^2) Time Complexity

    //Check if there exits two elements in an array suc that their sum is equal to given k

bool pairSum(int arr[], int n, int k){
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i]+arr[j] == k){
                cout << "Array Index's of the element which sum is equal to k = " << k << " is index " << i << " or " << j << endl;
                cout << "result (1 means true and 0 means false ) : ";
                return true;
            }
        }
    }
    cout << "result (1 means true and 0 means false ) : ";
    return false;
}

int main()
{
    int n, k;

    cout << "Enter the size of array in which minimum 2 elements presents and give value for k  : ";
    cin>>n>>k;

    int arr[n];

    cout << "Enter " << n << " values in array : ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout << "Sorted Array : ";
    sort(arr, arr+n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout<<endl;

    cout << pairSum(arr, n, k) << endl;
        
    return 0;
}

End Pair Sum Problem in O(n^2) Time Complexity Using Two-Pointers Technique*/

/* Start Paie Sum problem in O(n) Time Complexity Using Two-Pointers Technique 

    //Check if there exits two elements in an array suc that their sum is equal to given k

bool pairSum(int arr[], int n , int k){
    int start_index = 0, end_index = n-1;
    
    while (start_index < end_index)
    {
        if(arr[start_index] + arr[end_index] == k){
            cout << "Array Index's of the element which sum is equal to k = " << k << " is index " << start_index << " or " << end_index << endl;
                cout << "result (1 means true and 0 means false ) : ";
                return true;
        }

        else if(arr[start_index] + arr[end_index] < k){
            start_index++;
        }
        
        else{
            end_index--;
        }
    }

    cout << "result (1 means true and 0 means false ) : ";
    return false;
}

int main()
{
    int n, k;
    
    cout << "Enter the size of array in which minimum 2 elements presents and give value for k  : ";
    
    cin>>n>>k;

    int arr[n];

    cout << "Enter " << n << " values in array : ";

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    sort(arr, arr+n);

    cout << "Sorted Array : ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;

    cout << pairSum(arr, n, k);

    return 0;
}

End Pair Sum Problem in O(n) Time Complexity Using Two-Pointers Technique */
