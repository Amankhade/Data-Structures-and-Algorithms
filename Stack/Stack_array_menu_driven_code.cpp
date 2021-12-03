#include <iostream>
using namespace std;
#define size 4

int stack[size]; 
int top = -1;

void push()
{
    if (top == size - 1)
    {
        cout << "Stack Overflow!\n";
    }
    else
    {
        int element;
        cout << "Enter the element:";
        cin >> element;
        top++;
        stack[top] = element;
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "Stack Underflow!\n";
    }
    else
    {
        cout << "Element popped successfully: " << stack[top] << endl;
        top--;
    }
}
void display()
{
    cout << "Elements in the stack:\n";

    for (int i = 0; i <= top; i++)
    {
        cout << stack[i] << endl;
    }
}
int main()
{
    int choice;

    char c;
    while (1)
    {
        cout << "\n1. Push an element\n2. Pop an element\n3. Display the stack\n4 .Exit\n"<< endl;
        cout << "Enter your choice:\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);

        default:
            cout << "Invalid Operation\n";
        }
    }
    return 0;
}
