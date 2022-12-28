#include <iostream>
#include <cmath>
using namespace std;

/* Start how to many ways we can arrange MOMENT word Letters without repeatation COMMON Letters
 
    n     n!
     P = ------
      r  (n - r)!* COMMON Letters frequency multiple ( c1! * c!)


int factorial(int num){
    if(num == 1 || num == 0)
    return 1;
    
    return num * factorial(num-1);
}
int main(){
       char str[] = "MOMENT";
    int size = sizeof(str)/sizeof(str[0]);
    int res = 1;    

    for(int i = 65; i < 122; i++){
        int count = 0;
        for(int j = 0; j < size-1; j++){
            if(i == int(str[j]))
            count++;
        }
    if(count != 0)
    res = res * count; 
    }
    cout << "result : " << factorial(size-1)/res << endl;

    return 0;
}

End how many ways we can arrange MOMENT word letter make new words without repeatation COMMON Letters*/ 

/* Start reverse of a number

int main()
{
    int num ,res = 0;
    cout<<"Enter a number and get reverse of it : ";
    cin>>num;
    while(num != 0){
        int n = num%10;
        res = (res * 10) + n;
        num = num/10;
    }
    cout<<"Reverse of this number is = " <<res<<endl;

    return 0;
}

End reversed of a number */

int main()
{
    int num ,res;
    cout<<"Enter a number and check given number is armstrong or not : ";
    cin>>num;
    int num1 = num;
    while (num1 != 0)
    {
        int n = num1%10;
        res = res + pow(n,3);
        num1 = num1/10;
    }
    if(num == res){
        cout<<num<<" is a armstrong number"<<endl;
    }
    else{
        cout<<num << " is not a armstrong number"<<endl;
    }
}