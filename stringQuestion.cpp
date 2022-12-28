#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

/* Start Convert Lower Case Into Upper Case and Upper Case Into Lower Case
int main()
{
    string str = "shubham sharma";
    // convert into upper case
    for(int i = 0; i < str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
        }
    }

    cout << str << endl;

    // convert into lower case
    for(int i = 0; i < str.length(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
    } 

    cout << str << endl;

    return 0;
}
End Convert Lower Case Into Upper Case and Upper Case Into Lower Case */

/* Start Convert Lower Case Into Upper Case and Upper Case Into Lower Case using STL transform function
int main()
{
    string name = "shubham sharma";

    transform(name.begin(), name.end(), name.begin(), :: toupper);

    cout << name << endl;

    transform(name.begin(), name.end(), name.begin(), ::tolower);

    cout << name << endl;

    return 0;
}

End Convert Lower Case Into Upper Case and Upper Case Into Lower Case using STL transform function */

/* Start The Biggest Number From The Numeric String
int main()
{
    string number = "498723659";

    sort(number.begin(), number.end(), greater<int>()); // here greater<int>() use for Decreasing Order 

    cout << number << endl;

    return 0;
}

End The Biggest Number From The Numeric String */

/* Start Print Maximum Charchater Frequence In String

int main()
{
    string s = "abcacbade";
    int freq[26];

    for(int i = 0; i < 26; i++){
        freq[i] = 0;
    }

    for(int i = 0; i < s.length(); i++){
        freq[s[i]-'a']++;
    }

    char ans = 'a';
    int maxF = 0;

    for (int i = 0; i < 26; i++)
    {
        if(freq[i] > maxF){
            maxF = freq[i];
            ans = i + 'a';
        }
    }

    cout << ans << " frequence " << maxF << endl;
    
}

End Print Maximum Charchater Frequence In String */

/* Start Print Maximum Second Charchater Frequence In String

int main()
{
    string s = "abcacbadbe";
    int freq[26];

    for(int i = 0; i < 26; i++){
        freq[i] = 0;
    }

    for(int i = 0; i < s.length(); i++){
        freq[s[i]-'a']++;
    }

    char ans = 'a';
    int maxF = 0;

    for (int i = 0; i < 26; i++)
    {
        if(freq[i] >= maxF){
            maxF = freq[i];
            ans = i + 'a';
        }
    }

    cout << ans << " frequence " << maxF << endl;
    
}

End Print Maximum Second Charchater Frequence In String */

