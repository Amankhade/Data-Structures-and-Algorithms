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

void Insert_At_Beginning(int data)
{
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = data;
    ptr->prev = NULL;
    ptr->next = First;

    First->prev = ptr;
    First = ptr;

    display_left_to_right();
}

void Insert_At_End(int data)
{
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = data;
    ptr->prev = Last;
    ptr->next = NULL;

    Last->next = ptr;
    Last = ptr;

    display_left_to_right();
}

void Insert_at_certain_position(int position, int data)
{
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = data;
    int i = 0;
    node *p = First;
    while (i < position - 2)
    {
        p = p->next;
        i++;
    }
    ptr->prev = p;
    ptr->next = p->next;
    p->next->prev = ptr;
    p->next = ptr;
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
    cout << "Doubly Linked list before insertion:\n";
    display_left_to_right(); //// Function to display_left_to_right the data of the nodes.

    // Calling Functions for various Insertion operations

    cout << "\nCircular Linked List after Insertion at Beginning:\n";
    Insert_At_Beginning(13);

    cout << "\nCircular Linked List after Insertion at End:\n";
    Insert_At_End(20);

    cout << "\nCircular Linked List after Insertion at Certain Position:\n";
    Insert_at_certain_position(4, 23);
    return 0;
}