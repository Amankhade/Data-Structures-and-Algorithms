#include <iostream>
#include <malloc.h>
using namespace std;
struct node
{
    int data;
    struct node *prev;
    struct node *next;
} *First = NULL, *Last = NULL;

void init(int data) // Function to create nodes of a linked list.
{
    node *newNode;
    newNode = (node *)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;
    if (First == NULL)
    {
        newNode->prev = NULL;
        First = newNode;
        Last = newNode;
    }
    else
    {
        newNode->prev = Last;
        Last->next = newNode;
        Last = newNode;
    }
}

void display_left_to_right() // Linked list traversal in forward direction
{
    node *ptr = First;
    while (ptr != NULL)
    {
        cout << ptr->data << "-->";
        ptr = ptr->next;
    }
    cout << endl;
}

void Deletion_At_Beginning()
{
    node *ptr = First;
    First = First->next;
    First->prev = NULL;
    display_left_to_right();
    free(ptr);
}

void Deletion_At_End()
{
    node *ptr = First;

    while (ptr != Last)
    {
        ptr = ptr->next;
    }
    Last = Last->prev;
    Last->next = NULL;
    display_left_to_right();
    free(ptr);
}

void Deletion_at_certain_position(int position)
{
    int i = 0;
    node *p = First;
    node *q = First->next;
    while (i < position - 2)
    {
        p = p->next;
        q = q->next;
        i++;
    }
    p->next = q->next;
    q->next->prev = p;
    free(q);
    display_left_to_right();
}

int main()
{
    init(5);
    init(10);
    init(3);
    init(7);
    init(6);
    init(4);
    cout << "Doubly Linked list before deletion:\n";
    display_left_to_right(); //// Function to display_left_to_right the data of the nodes.

    // Calling Functions for various Deletion operations

    cout << "\nCircular Linked List after Deletion at Beginning:\n";
    Deletion_At_Beginning();

    cout << "\nCircular Linked List after Deletion at End:\n";
    Deletion_At_End();

    cout << "\nCircular Linked List after Deletion at Certain Position:\n";
    Deletion_at_certain_position(3);

    return 0;
}