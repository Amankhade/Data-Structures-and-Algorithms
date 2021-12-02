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
void display_right_to_left() // Linked list traversal in backward direction
{
    node *ptr = Last;
    while (ptr != NULL)
    {
        cout << ptr->data << "-->";
        ptr = ptr->prev;
    }
    cout << endl;
}
int main()
{
    init(5);
    init(10);
    init(3);
    init(7);
    init(6);
    init(4);
    cout << "Doubly Linked list in forward direction:\n";
    display_left_to_right();

    cout << "Doubly Linked list in backward direction:\n";
    display_right_to_left();

    return 0;
}