#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
} *First = NULL, *Last = NULL;
node *init(int data)
{
    node *newNode;
    newNode = new node;
    newNode->data = data;
    newNode->next = NULL;
    if (First == NULL)
    {
        First = newNode;
        Last = newNode;
    }
    else
    {
        Last->next = newNode;
        Last = newNode;
    }
    return newNode;
}
void display(node *ptr)
{
    ptr = First;
    while (ptr != NULL)
    {
        cout << ptr->data << "-->";
        ptr = ptr->next;
    }
    cout << endl;
}
void Deletion_At_Beginning(node *ptr)
{
    ptr = First;
    First = First->next;
    display(First);
    free(ptr);
}
void Deletion_At_End(node *ptr)
{
    Last = First;
    ptr = First->next;
    while (ptr->next != NULL)
    {
        Last = Last->next;
        ptr = ptr->next;
    }
    Last->next = NULL;

    display(First);
    free(ptr);
}
void Deletion_at_certain_position(node *ptr, int position)
{
    int i = 0;
    node *point = First;
    ptr = First->next;
    while (i < position - 2)
    {
        point = point->next;
        ptr = ptr->next;
        i++;
    }
    point->next = ptr->next;
    free(ptr);
    display(First);
}
int main()
{
    init(5);
    init(10);
    init(3);
    init(7);
    init(6);
    init(4);
    cout << "Linked list before operation:\n";
    display(First);
    cout << "\nLinked list after operation:\n";
    Deletion_At_Beginning(First);
    Deletion_At_End(Last);
    Deletion_at_certain_position(First, 3);

    return 0;
}