//WAP to create an array of subjects you are studying in current semester.

#include<iostream>
using namespace std;
int main()
{
    string subject[]={"Data structures and algorithms","Web development(PHP/JSP)","Discrete Structures","Data Communication","Unix and shell programming","Cloud Computing","Application development using java programming"};

    cout<<"Following are the subjects of current semester:"<<endl;

    for (int i = 0; i <=6; i++)
    {
        cout<<i+1<<"."<<subject[i]<<endl;
    }
    
    return 0;
}