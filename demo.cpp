#include <bits/stdc++.h>
using namespace std;

/* using Recursion method
int printElement(int n)
{
    
    if(n <= 1)
    return n;
    return printElement(n-1)+printElement(n-2);

}

int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Answer is "<<printElement(n);
    return 0;
}
*/

/* using dynamic programming 
class gfg
{
    public:
    int printfib(int n)
    {
        int f[n+2];
        int i;

        f[0] = 0;
        f[1] = 1;

        for(int i = 2; i <= n; i++)
        {
            f[i] = f[i-1] + f[i-2];
        }
        return f[n];
    }
};   
int main()
{
    gfg fh;
    int n = 9;
    cout<< fh.printfib(n);
    return 0;
}
*/

// int findElement(int arr[], int s, int key)
// {
//     int i;
//     for(i = 0; i < s; i++)
//     {
//         if(arr[i] == key)
//         return i;
//     }
//     return -1;
// }

/* Start Binary search algorithm with bubble sort algorithm

void bubbleSort(int arr[], int s)
{
    int flag = 0;
    for(int i = 0; i < s-1; i++)
    {
        for(int j = 0; j < s-i-1; j++)
        {
        if(arr[j] > arr[j+1])
        {
            int t = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = t;
            flag = 1;
        }
        }
        if(flag == 0)
        {
            cout<<"Array already in sorted form"<<endl;
            break;
        }
    }
}

int binarySearch(int arr[], int s, int key)
{
    int f = 0;
    int l = s;

    while(f <= l)
    {
    int m = (f+l)/2;
    if(arr[m] == key)
    return m;
    else if(arr[m] > key)
    {
        l = m-1;
    }
    else
    {
        f = m+1;
    }
}
return -1;
}

int main()
{
    int arr[10] = {1, 2, 10, 3, 4, 9, 5, 6, 7, 8};
    int s = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, s);
    for(int i = 0; i < s; i++)
    {
        cout<<arr[i] << " ";
    }
    cout<<endl;
    int key = 4;
    cout << "Search Position Result : " << binarySearch(arr, s, key);
    return 0;
}

 End Binary search Algorithm with bubble sort Algorithm */

/* Start Binary to Decimal conversion 

// decimal to binary conversion

int decimalToBinary(int element)
{
    int j, r = 0;
    int i = element;
    while (i > 0)
    {
        j = i % 2;
        r = r * 10 + j;
        i = i/2;
    }
    
    return r;
    
}

// binary to Decimal conversion

int binaryToDecimal(int element)
{
    int j , r = 0, s = 0, f = 0;
    int i = element;
    while (i > 0)
    {
        j = i % 10;
        r += pow(2, s) * j;
        f += r;
        i = i/10;
        s++;
    }
   return r; 
}

int main()
{
    char r = 'x';
    while(r == 'x')
    {
    int dElement;
    cout<<"Enter A number that you want to binary conversion : ";
    cin>>dElement;
    int bElement = decimalToBinary(dElement);
    cout<<"Binary represenatation of "<< dElement << " is : "<< bElement << endl;
    cout<<"Again Deminal represenatation of "<< bElement << " is : " << binaryToDecimal(bElement) << endl;
    cout<<"If you want to exit the program then press y otherwise press y : ";
    cin>>r;
    }
    return 0;   
}

End binary conversion */

