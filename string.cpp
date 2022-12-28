#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

/* Start Simple Input and Output operation of Strings 
int main()
{
    string name;
    cin>>name;

    cout << name <<endl;
}

End  Simple Input and Output operation of Strings */

/* Start Different ways of taking input for strnigs 
int main()
{
    string name = "shubham sharma";
    cout << name << endl; 
    string name1(5,'s');
    cout << name1 << endl;
    string name3;
    getline(cin, name3); // get input also get space
    cout << name3 << endl;
    string name4;
    cin>>name4; // get input string not space means after space it will print rest of word/santance.
    cout << name4 << endl;

    return 0;
}

End  Different ways of taking input for strnigs */

// Start Different Function Of String 

int main()
{
    //append means addition of different string 
    //string s1 = "fam";
    //string s2 = "ily"; 
    //cout << s1+s2 << endl; // append string without append() function
    //s1.append(s2);  here s1 = s1 + s2 
   // s1.append(s2);
   // cout << s1 << endl;
    //access particular charchater in a string 
    //cout << s1[1] << endl; 

    string abc = "sfdsfjlkjckjdsfjdlk";
    cout << abc << endl;
    //making empty string use clear function 
    abc.clear();
    cout << abc << endl;

    //comparisoin between two string using firstString.compare(secondString) if => firstString > secondString = +positive
    string s1 = "abc";                                                       // => firstString == secondString = 0   
    string s2 = "xyz";                                                       // => firstString < secondString = -negitive

    cout << s2.compare(s1) << endl;
    // also check strings are equal or not
    s1 = "abc";
    s2 = "abc";

    if(!s1.compare(s2)){
        cout << "String are equal" << endl;
    }

    //Check string is empty or not using empty()

    s1.clear(); // here we are making empty string or blank string

    if(s1.empty()){
        cout << "String is empty" << endl;
    }

    if(!s2.empty()){
        cout << "String is not empty" << endl;
    }

    // erase charchaters in string using erase(where to start index, how many charchater you want to delete)
    s1 = "nincompoop";
    s1.erase(3,3);

    cout << s1 << endl;

    //find substring in string using find function

    s1 = "nimcompoop";

    cout << s1.find("com") << endl;

    // insert string in a particular index position using insert(index, "strnig that you want to insert");  

    s1.insert(2, "lol");
    cout << s1 << endl;
    
    // using size(), length() with string.size(), string.length() 
    cout << s1.size() << endl;

    for(int i = 0; i < s1.length(); i++){
        cout << s1[i] << endl;
    }

    //using substr(index, how many word you want to inert in new substr)

    s1 = "nimcompoop";
    string t = s1.substr(6 ,4);
    cout << t << endl;

    //convert string to integer
    s1 = "786";
    int x = stoi(s1);
    cout << x+2 << endl;

    //convert integer to string
    string ex = to_string(x) + "2";
    cout << ex << endl;

    //sort function of string 

    s1 = "fdsjftoiidmdtpojtpoodpf";
    sort(s1.begin(), s1.end());
    cout << s1 << endl ;
}

// End Different Function Of String */