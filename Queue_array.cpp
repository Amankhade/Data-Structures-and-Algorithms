#include <iostream>
using namespace std;
#define size 4

int Queue[size];
int front = 0, rear = -1;

void push(int element)
{
    if (rear == size - 1)
    {
        cout << "Queue Overflow!\n";
    }
    else
    {
        rear++;
        Queue[rear] = element;
    }
}

void pop()
{
    if (rear == -1)
    {
        cout << "Queue Underflow!\n";
    }
    else
    {
        cout << "Element popped successfully: " << Queue[front] << endl;
        front++;
    }
}
void display()
{
    cout << endl;
    cout << "Elements in the Queue:\n";
    for (int i = front; i <= rear; i++)
    {
        cout << Queue[i] << endl;
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);

    display();

    pop();
    pop();

    display();

    return 0;
}