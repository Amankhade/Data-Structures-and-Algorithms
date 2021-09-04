//WAP to create 10 element array and print it reverse.

#include<iostream>
using namespace std;
int main()
{
    int num[10];
    cout<<"Enter the elements:"<<endl;
    for (int i = 0; i <=9; i++)
    {
        cin>>num[i];
    }
    cout<<"The values of elements in reverse order are following--"<<endl;
    for ( int j = 9; j >=0 ; j--)
    {
        cout<<num[j]<<endl;
    }
    

    return 0;
}