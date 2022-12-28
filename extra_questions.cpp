#include<bits/stdc++.h>
using namespace std;

/* Start Find a triplet that sum to a given value in O(n^3) Time Complexity

int main()
{
    int n, sum;
    cout << "Enter the size of array : ";
    cin>>n;
 
    cout << "Enter the Target Sum Value Whose Value Is Equal To Triplet That You Find : ";
    cin>>sum;

    int arr[n];
    cout << "Enter " << n << " values in array : ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    bool flag = true;

    for(int i = 0; i < n-2; i++){
        for(int j = i+1; j < n-1; j++){
            for(int k = j+1; k < n; k++){
                if(arr[i]+arr[j]+arr[k] == sum){
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                    flag = true;
                    break;
                }
            }
        }
    }

    if(flag != true){
        cout << "In this don't have any triplet that value is equal to " << sum << endl;
    }

    return 0;
}

End Find a triplet that sum to a given value in O(n^3) Time Complexity */

/* Start Find A Triplet That Sum To A Given Value In O(n^2) Time Complexity[Using Two Pointers Technique]

int main()
{
    int n, sum;
    cout << "Enter the size of array : ";
    cin>>n;
 
    cout << "Enter the Target Sum Value Whose Value Is Equal To Triplet That You Find : ";
    cin>>sum;

    int arr[n];
    cout << "Enter " << n << " values in array : ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    sort(arr, arr+n);
    bool flag = true;

    for (int i = 0; i < n-2; i++)
    {
        int start_index = i+1;
        int end_index = n-1;

        while (start_index < end_index)
        {
            if(arr[i]+arr[start_index]+arr[end_index] == sum){
                cout << arr[i] << " " << arr[start_index] << " " << arr[end_index] << endl;
                flag = true;
                break;
            }
            else if(arr[i]+arr[start_index]+arr[end_index] > sum){
                end_index--;
            }
            else{
                start_index++;
            }
        }
    }
    
    if(flag != true){
        cout << "In This Array Don't Have Any Triplet That Sum Value Is Equal To " << sum << endl;
    }

    return 0;

}

End Find A Triplet That Sum To A Given Value In O(n^2) Time Complexity[Using Two Pointers Technique] */

/* Start Maximum circular subarray sum

    //Given n numbers (both +ve and -ve), arranged in a circle, find the maximum sum of consecutive numbers.

int kadane(int arr[], int s){
    int maxSubArrSum = INT_MIN;
    int currentSum = 0;
    for(int i = 0; i < s; i++){
        currentSum += arr[i];

        if(currentSum < 0){
            currentSum = 0;
        }
        maxSubArrSum = max(maxSubArrSum, currentSum);
    }
    return maxSubArrSum;
}
int maxCirSum(int arr[], int s){
    // Case 1: get the maximum sum using standard kadane'
    // s algorithm
    int maxSubArrNoWarp = kadane(arr, s);
    // if maximum sum using standard kadane' is less than 0
    if(maxSubArrNoWarp < 0)
    return maxSubArrNoWarp;
    // Case 2: Now find the maximum sum that includes
    // corner elements.
    int arrSum = 0;
    for(int i = 0; i < s; i++){
        arrSum += arr[i]; //Calculate array-sum
        arr[i] = -arr[i]; // invert the arr sign (change sign of array element)
    }

    // max sum with corner elements will be:
    // array-sum - (-max subarray sum of inverted array)
    arrSum = arrSum + kadane(arr, s);

    // The maximum circular sum will be maximum of two sums
    if(arrSum > maxSubArrNoWarp){
        return arrSum;
    }
    else{
        return maxSubArrNoWarp;
    }
}

int main()
{
    int arr[] = {11, 10, -20, 5, -3, -5, 8, -13, 10};
    int s = sizeof(arr)/sizeof(arr[0]);
    cout << "Array Size : " << s << endl;

    cout << "Maximum Circular Sum : " << maxCirSum(arr, s);

    return 0;
}

End Maximum circular subarray sum */

/* Start Increment In A Value Using Pointer

void increment(int *a){
    *a+=1;
} 

int main()
{
    int a = 5;
    cout<< a <<endl;
    increment(&a);
    cout<<a << endl;
    increment(&a);
    cout<<a << endl;

    return 0;
}

End Increment In A Value Using Pointer */