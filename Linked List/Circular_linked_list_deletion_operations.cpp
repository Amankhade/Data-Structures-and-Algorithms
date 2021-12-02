#include <iostream>
#include <malloc.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
} *First = NULL, *Last = NULL;

void init(int data)         // Function to create nodes of a linked list.
{
    node *newNode;
    newNode = (node *)malloc(sizeof(node));
    newNode->data = data;
    newNode->link = NULL;
    if (First == NULL)
    {
        First = newNode;
        Last = newNode;
    }
    else
    {
        Last->link = newNode;
        Last = newNode;
        newNode->link = First;
    }
}
void display()      // Linked list traversal
{
    node *ptr = First;
    do
    {
        cout << ptr->data << "-->";
        ptr = ptr->link;
    } while (ptr != First);

    cout << endl;
}

void Deletion_At_Beginning()
{
    node *ptr = First;
    First = First->link;
    Last->link = ptr->link;
    free(ptr);
    display();
}

void Deletion_At_End()
{
    node *p = First;
    node *q = First->link;
    while (q != Last)
    {
        p = p->link;
        q = q->link;
    }
    p->link = q->link;
    Last = p;

    display();
    free(q);
}

void Deletion_at_certain_position(int position)
{
    int i = 0;
    node *p = First;
    node *q = First->link;
    while (i < position - 2)
    {
        p = p->link;
        q = q->link;
        i++;
    }
    p->link = q->link;
    free(q);
    display();
}

int main()
{
    // Passing values in the init function so that the nodes can be initialized

    init(5);
    init(10);
    init(3);
    init(7);
    init(6);
    init(4);
    cout << "Circular Linked List before Deletion:\n";
    display();      // Function to display the data of the nodes.

    // Calling Functions for various Deletion operations

    cout << "\nCircular Linked List after Deletion at Beginning:\n";
    Deletion_At_Beginning();

    cout << "\nCircular Linked List after Deletion at End:\n";
    Deletion_At_End();

    cout << "\nCircular Linked List after Deletion at Certain Position:\n";
    Deletion_at_certain_position(3);
    return 0;
}