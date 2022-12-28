#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

/* Start Sum of first n natural number 

int naturalNum(int n){                                                          // n = 3
    int sum;                                                                    // Sum of first natural till n
    sum = n*(n+1)/2;                                                            // sum = 1 + 2 + 3 => sum = 6
    return sum;
}

int main()
{
    int n, sum = 0;
    cout<<"Enter a number and get sum of first n : ";
    cin>>n;
    cout<<"Sum of first n natural numbers : "<< naturalNum(n);

    return 0;
}

End Sum of first n natural number */

/* Start Check Pythagorian 

bool checkPythagorian(int x, int y, int z){                                     // store max_number in x, y, z then Check Pythagorian Triplet
    int a, b, c;                                                                // let x is maximum number then
    a = max(x, max(y, z));                                                      // x*x == y*y + z*z
    if(a == x){                                                                 // if above equation is ture then print Pythagorian Triplet
        b = y;                                                                  // Otherwise print Not a pythagorian triplet
        c = z;
    }
    else if(a == y){
        b = x;
        c = z;
    }
    else{
        b = x;
        c = y;
    }

    if(pow(a, 2) == (pow(b, 2) + pow(c, 2))){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int x, y, z;
    cout<<"Enter the value of x, y and z and check pythagorian triplet : ";
    cin>>x>>y>>z;

    if(checkPythagorian(x,y,z)){
        cout<<"Pythagorian Triplet"<<endl;
    }
    else{
        cout<<"Not a pythagorian triplet"<<endl;
    }

    return 0;
}

End Check Pythagorian */

/* Start Binary To Decimal Conversion

int decimalNumber(int binary){
    int value = 0, counter = 0;
    for(int i = binary; i > 0; i = i/10){
        int rem = i%10;
        value += (rem * pow(2, counter++));
    }
    return value;
}

int main()
{
    int binaryNumber;
    cout<<"Enter a binary number and get decimal value : ";
    cin>>binaryNumber;
    cout<<"Binary to Decimal - "<<endl;
    cout<<"Decimal value of binary number : " << binaryNumber << " is : " << decimalNumber(binaryNumber); 
}

End Binary To Decimal conversion */

///* Start Decimal To Binary Conversion           (4) base 10[ for decimal ] = (100) base 2[ for binary]

int decimalToBinary(int n){
    int ans = 0;
    int base = 1; // we know  2's power 0 = 1 , 3's power 0 = 1 and etc.

    while (base <= n) // here we are check higest power of base is less then or equal to n like n = 4 then 2's power 2 is equal to 4 and n = 5 then 2's power 2 is less then 5 
    {
        base *= 2; // here you notice for n = 4 is base value base 8 
    }
    base = base/2; // above base = 8 so again we decrease base value by 2 here base = 4

    while (base > 0)
    {
        int last_digit = n/base;    // this code block used for get 0 and 1 digit * base power like n = 4 we know 
        n = n - last_digit * base;  // we can write binary in this form = 1 * 2^(powe)2 + 0 * 2 ^ 1 + 0 * 2 ^ 0 
        base = base/2;                  
        ans = ans * 10 + last_digit;
    }
    
    return ans;
}
int main()
{
    int n;
    cout<<"Enter a number and get binary conversion : ";
    cin>>n;

    cout <<  (n);
    return 0;
}

//End Decimal To Binary conversion */

/* Start Decimal To Octal Conversion            (100) base 10[ for decimal ] = (144) base 8[ for octal]

int decimalToOctal(int n){
    int ans = 0;
    int base = 1; // we know  2's power 0 = 1 , 3's power 0 = 1 and etc.

    while (base <= n) // here we are check higest power of base is less then or equal to n like n = 100 then 8's power 2 is less than to 100
    {
        base *= 8; // here you notice for n = 100 is base value base 512 
    }
    base /=8; // above base = 512 so again we decrease base value by 8 here base = 64


     while (base > 0)
    {
        int last_digit = n/base;    // this code block used for get 0 and 1 digit * base power like n = 100 we know 
        n = n - last_digit * base;  // we can write octal in this form = 1 * 8^(powe)2 + 4 * 8 ^ 1 + 4 * 8 ^ 0 
        base = base/8;                  
        ans = ans * 10 + last_digit;
    }

    return ans;
}

int main()
{
    int decimal;
    cout<<"Enter a decimal and get octal conversion : ";
    cin>>decimal;

    cout<< decimalToOctal(decimal);

    return 0;
}

End Decimal To Octal Conversion */

/* Start Ocatal To Decimal Conversion           (144) base 8[ for octal ] = (100) base 10[ for decimal ]

int octalToDecimal(int n){
    int ans = 0;
    int base = 1;

    while(n > 0){
        int rem = n%10;
        ans = ans + base * rem;
        base = base * 8;
        n = n/10; 
    }

    // logic by me

    // int value = 0, counter = 0;

    // for(int i = n; i > 0; i = i/10){
    //     int rem = i%10;
    //     value += (rem*pow(8, counter++));
    // }

    // return value;

    return ans;
}

int main()
{
    int octalNumber;
    cout<<"Enter a octal number and get decimal value : ";
    cin>>octalNumber;

    cout << octalToDecimal(octalNumber);

    return 0;
}

End Octal To Decimal Conversion */

/* Start Hexadecimal To Decimal Conversion          //(1CF) base 16[ for hexadecimal ] = (463) base 10[ for decimal ]

int hexadecimalToDecimal(string n){
    // int ans = 0;
    // int base = 1;

    // int s = n.size();
    // for(int i = s-1; i >= 0; i--){
    //     if(n[i] >= '0' && n[i] <= '9'){
    //         ans += base*(n[i]-'0');
    //     }
    //     else if(n[i] >= 'A' && n[i] <= 'F'){
    //         ans += base*(n[i]-'A' + 10);
    //     }
    //     base*=16;
    // }

    //logic by me
    // int value = 0, counter=0;

    // int s = n.size();
    // for(int i = s-1; i >= 0; i--){
    //     if(n[i] >= '0' && n[i] <= '9'){
    //         value += ((n[i]-'0')*pow(16, counter++));
    //     }
    //     else if(n[i] >= 'A' && n[i] <= 'F'){
    //         value += ((n[i]-'A' + 10)*pow(16,counter++));
    //     }
    // }
    // return value;

    return ans;
}

int main()
{
    string hexadecimalNumber;
    cout<<"Enter a hexadecimal number and get decimal : ";
    cin>>hexadecimalNumber;

    cout << hexadecimalToDecimal(hexadecimalNumber);

    return 0; 
}

End Hexadecimal To Decimal Conversion */

/* Start Decimal To Hexadecimal Conversion          //(100) base 10[ for decimal ] = (64) base 16[ for hexadecimal ]

string decimalToHexadecimal(int n){
    string ans = "";
    int base = 1;

    while(base <= n){
        base *=16;
    }
    base /= 16;

    while (base > 0){
        int last_digit = n/base;
        n = n - last_digit*base;
        base /= 16;
        if(last_digit <= 9){
            ans += to_string(last_digit);
        }
        else{
            char c = 'A' + last_digit - 10;
            ans.push_back(c);
        }
    }

    return ans;
}

int main()
{
    int decimalNumber;
    cout<<"Enter a decimal and get hexadecimal value : ";
    cin>>decimalNumber;

    cout << decimalToHexadecimal(decimalNumber);

    return 0;

}

End Decimal To Hexadecimal Conversion */

/* Start Add Two Binary Numbers             // binaryNumber_1 = 1010 and binaryNumber_2 = 1011
                                            // Addition of Two binaryNumbers 
int reverseNumber(int ans){                 
                                            //  1010
    int newAns = 0;                         // +1011
                                            //--------
    while (ans > 0)                         // 10101
    {
        int last_digit = ans%10;
        newAns = newAns*10 + last_digit; 
        ans /= 10;
    }
    
    return newAns;
}

int binaryAddition(int binaryNumber_1, int binaryNumber_2){

    int ans = 0;

    int prevCarry = 0;

    while (binaryNumber_1 > 0 && binaryNumber_2 > 0)
    {
        if(binaryNumber_1%2 == 0 && binaryNumber_2%2 == 0){
            ans = ans*10 + prevCarry;
            prevCarry = 0;
        }
        else if((binaryNumber_1%2 == 0 && binaryNumber_2%2 == 1) || (binaryNumber_1%2 == 1 && binaryNumber_2%2 == 0)){
            if(prevCarry == 1){
                ans = ans*10 + 0;
                prevCarry = 1;
            }
            else{
                ans = ans*10 + 1;
                prevCarry = 0;
            }
        }
        else{
            ans = ans*10 + prevCarry;
            prevCarry = 1;
        }
        binaryNumber_1/=10;
        binaryNumber_2/=10;
    }

    while (binaryNumber_1 > 0)
    {
        if(prevCarry == 1){
            if(binaryNumber_1%2 == 1){
                ans = ans*10 + 0;
                prevCarry = 1;
            }
            else{
                ans = ans*10 + 1;
                prevCarry = 0;
            }
        }
        else{
            ans = ans*10 + (binaryNumber_1%2);
        }
        binaryNumber_1/=10;
    }
    
    while (binaryNumber_2 > 0)
    {
        if(prevCarry == 1){
            if(binaryNumber_2%2 == 1){
                ans = ans*10 + 0;
                prevCarry = 1;
            }
            else{
                ans = ans*10 + 1;
                prevCarry = 0;
            }
        }
        else{
            ans = ans*10 + (binaryNumber_2%2);
        }
        binaryNumber_2/=10;
    }

    if(prevCarry == 1){
        ans = ans*10 + 1;
    }
    
    ans = reverseNumber(ans);

    return ans;
}

int main()
{
    int binaryNumber_1, binaryNumber_2;
    cout<<"Enter two binary numbers and get addition of these binary number : ";
    cin>>binaryNumber_1>>binaryNumber_2;

    cout << binaryAddition(binaryNumber_1, binaryNumber_2);

    return 0;
}

End Add Two Binary Numbers */