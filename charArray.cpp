#include <bits/stdc++.h>
using namespace std;

/* Start Print apple word in charchater by charchater

int main()
{
    char name[100] = "apple";
    int i = 0;
    while (name[i] != '\0')
    {
        cout << name[i] << endl;
        i++;
    }
    return
}

End Print apple word in charchater by charchater */

/* Start Take input and give output and find particular index charchater value 

int main()
{
    char name[100];

    cin>>name;

    cout << name;
 
    cout <<name[3];
    
    return 0;
}

End Take input and give output and find particular index charchater value */

/* Start Check That Given Word Is A Palindrome OR NOT
int main()
{
    int n;
    cin>>n;

    char name[n+1];
    cin>>name;

    bool check = 1;

    //Q.what is palindrome?
    //Ans. if we do a word in reverse and after reversing word is same normal word then we can say word is palindrome.
    //EXAMPLE - NITIN => Reverse of NITIN is Also NITIN another example ANNA => reverse of ANNA is also ANNA both words are palindrome words.
    
    for (int i = 0; i < n; i++)
    {
        if(name[i] == name[n-1-i]){
            check = 1;
            break;
        }
        else{
            check = 0;
        }
    }

    if(check){
        cout << "this word is a palindrome" << endl;
    }
    else{
        cout << "this word is not a palindrome" << endl;
    }

    return 0;   
}

End Check That Given Word Is A Palindrome OR NOT */

/* Start Largest Word in a Sentace 

int main()
{
    int n;
    cout << "Enter the size of sentance : ";
    cin>>n;
    cin.ignore();

    char str[n+1];//extra one size of '\0[null charchater]'

    cin.getline(str, n);//with the help of getline fn we can take space also in our sentance
    cin.ignore();

    int currentLen = 0;
    int maxLen = 0;

    int i = 0;

    while (1)
    {
        if(str[i] == ' ' || str[i] == '\0'){
            if(currentLen > maxLen){
                maxLen = currentLen;
            }
           currentLen = 0;
        }

        else{
            currentLen++;
        }

        if(str[i] == '\0')
        break;

        i++;
    }
    
    cout << "Largest Word in Sentance is : " << maxLen << endl;

    return 0;
}

End Largest Word in a Sentance */

/* Start Largest word in a sentance (through my logic)

int main()
{
    char arr[100];

    cin.getline(arr, 100);
    cin.ignore();

    int mx = INT_MIN;
    int currentWord = 0;
    int i = 0;
    while(arr[i] != '\0')
    {
        if(arr[i] != ' '){
            currentWord++;
        }
        else{
            currentWord = 0;
        }
        mx = max(mx, currentWord);
        i++;
    }
    cout << currentWord << endl;

    return 0;   
}

End Largest word in a sentance (Through my logic) */

/* Start Print Largest Word or Largest Word length in a sentance 

int main()
{
    int n;
    cout << "Enter the size of sentance : ";
    cin>>n;
    cin.ignore();

    char str[n+1];//extra one size of '\0[null charchater]'

    cin.getline(str, n);//with the help of getline fn we can take space also in our sentance
    cin.ignore();

    int currentLen = 0;
    int maxLen = 0;
    int st = 0, maxst = 0;
    int i = 0;

    while (1)
    {
        if(str[i] == ' ' || str[i] == '\0'){
            if(currentLen > maxLen){
                maxLen = currentLen;
                maxst = st;
            }
           currentLen = 0;
           st = i+1;
        }

        else{
            currentLen++;
        }

        if(str[i] == '\0')
        break;

        i++;
    }
    
    cout << "Largest Word in Sentance is : " << maxLen << endl;

    for (int i = 0; i < maxLen; i++)
    {
        cout << str[i+maxst]; 
    }
    
    return 0;
}

End Print Largest Word or Largest Word length in a sentance */