//WAP to input and print a string using char array.

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char st[30]; 
    cout<<"Enter the string: ";
    gets(st);
    cout<<"String: "<<st<<endl;
    cout<<"The number of characters in the string: "<<strlen(st);
    return 0;
}