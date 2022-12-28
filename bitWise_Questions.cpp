#include <iostream>
using namespace std;

/* Start write a program to find a unique number in an array where all numbers except one, are present twice

int unique(int arr[], int s){
    int res = 0;
    for(int i = 0; i < s; i++){
        res ^= arr[i];
    }
    return res;
}
int main()
{
    int arr[] = {1,2,3,4,3,2,1};
    int s = sizeof(arr)/sizeof(arr[0]);

    cout << unique(arr, s) << endl;

    return 0;
}

End write a program to find a unique number in an array where all numbers except one, are present twice */

/* Start write a program to find 2 unique numbers in an array where all numbers except two, are present twice

int setBit(int n, int pos){
    return ((n & (1 << pos)) != 0);
}
void uniqueTwo(int arr[], int s){
    int xOR = 0;
    for(int i = 0; i < s; i++){
        xOR ^= arr[i];
    }
    int tempXOR = xOR;
    int setbit = 0, pos = 0;
    while (setbit != 1)
    {
        setbit = xOR & 1;
        pos++;
        xOR = xOR>>1;
    }
    int newxor = 0;
    for(int i = 0; i < s; i++){
        if(setBit(arr[i], pos-1)){
            newxor ^= arr[i];
        }
    }

    cout << newxor << endl;
    cout << (tempXOR^newxor) << endl;
}
int main()
{
    int arr[] = {2,4,6,7,4,5,6,2};
    int s = sizeof(arr)/sizeof(arr[0]);

    uniqueTwo(arr, s);

    return 0;
}

End write a program to find 2 unique numbers in an array where all numbers except two, are present twice */

/* Start write a program to find a unique number in an array where all numbers expect one, are present thrice

int getBit(int n , int pos){
    return ((n & (1 << pos)) != 0);
}
int setBit(int n, int pos){
    return (n | (1 << pos));
}
int unique(int arr[], int s){
    int result = 0;
    for(int i = 0; i < 64; i++){
        int sum = 0;
        for(int j = 0; j < s; j++){
            if(getBit(arr[j], i)){
                sum++;
            }
        }
        if(sum%3 !=  0){
            result = setBit(result , i);
        }
    }

    return result;
}
int main()
{
    int arr[] = {3,2,1,4,3,2,1,1,2,3};
    int s = sizeof(arr)/sizeof(arr[0]);

    cout << unique(arr, s);

    return 0;
}

End write a program to find a unique number in an array where all numbers expect one, are present thrice */