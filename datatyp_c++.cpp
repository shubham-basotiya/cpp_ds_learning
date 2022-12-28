#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Size of integer " << sizeof(a) << endl;
    float b;
    cout << "Size of float " << sizeof(b) << endl;
    char c;
    cout << "Size of character " << sizeof(c) << endl; 
    bool d;
    cout << "Size of boolean " << sizeof(d) << endl;
    short int e;
    cout << "Size of shortint " << sizeof(e) << endl;
    long int f;
    cout << "Size of longint " << sizeof(f) << endl;
    signed int g;
    cout << "Size of signed " << sizeof(g) << endl;
    long unsigned int h;
    cout << "Size of long unsingd int " << sizeof(h) << endl;
    return 0;
}