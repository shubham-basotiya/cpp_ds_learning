#include <iostream>
using namespace std;

/* Start To Check/get a bit status at particular position in a number

int getBit(int n, int pos){
    return ((n&(1<<pos)) != 0);
}
int main()
{
    
    cout << getBit(5, 1);

    return 0;
}

End To Check/get a bit status at particular position in a number */

/*Start To Set a bit status at particular position of a number

int setBit(int n, int pos){
    return (n|(1<<pos));
}
int main()
{


    cout << setBit(5, 1);

    return 0;
}

End To Set a bit status at particular position of a number */

/* Start To clear a bit(means set bit with value 0) at particular positoin of a number
int clearBit(int n, int pos){
    int mask = ~(1<<pos);
    return (n&mask);
}
int main()
{

    cout << clearBit(5,2);

    return 0;
}

End To clear a bit(means set bit with value 0) at particular position of a number */

/* Start To update a bit at particular position of a number

int updateBit(int n, int pos, int value){
    int mask = ~(1<<pos);//first we clear bit position
    n = n & mask;

    return (n|(value<<pos));
}
int main()
{
    cout << updateBit(5, 1, 1);

    return 0;
}



End To update a bit at particular position of a number */

/* Start Write a program to check if a given number is power of 2

int checkPowerTwo(int n){
    return (n && !(n & n-1));
}
int main()
{
    cout << checkPowerTwo(16);//we know all 2's power number in binary form only 1 set bit (1 bit)

    return 0;
}

End Write a program to check if a given number is power of 2 */

/* Start Write a program to count the number of ones in binary representation of a number 

int numberOfOnes(int n){
    int count = 0;
    while(n){
        n = n & n-1;
        count++;
    }
    return counter;
}
int main()
{
    cout << numberOfOnes(19);
 
    return 0;
}

End Write a program to count the number of ones in binary representation of a number */

/* Start Print all subsets of a set 

void subsets(int arr[], int s){
    for(int i = 0; i < (1<<s); i++){
        for(int j = 0; j < s; j++){
            if(i & (1 << j)){
                cout << arr[j] << " ";
            }
        }cout << endl;
    }
}
int main()
{
    int arr[] = {1,2,3,4};
    int s = sizeof(arr)/sizeof(arr[0]);
    subsets(arr, s);

    return 0;
}
ENd Print all subsets of a set */

