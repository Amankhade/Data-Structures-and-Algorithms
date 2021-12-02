#include <iostream>
#include <malloc.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
} *First = NULL, *Last = NULL;

void init(int data) // Function to create nodes of a linked list.
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
void display() // Linked list traversal
{
    node *ptr = First;
    do
    {
        cout << ptr->data << "-->";
        ptr = ptr->link;
    } while (ptr != First);

    cout << endl;
}

void Insert_At_Beginning(int data)
{
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = data;
    ptr->link = First;
    Last->link = ptr;
    First = ptr;
    display();
}

void Insert_At_End(int data)
{
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = data;
    ptr->link = First;
    Last->link=ptr;
    Last = ptr;
    display();
}

void Insert_at_certain_position(int position, int data)
{
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = data;
    int i = 0;
    node *point = (node *)malloc(sizeof(node));
    point = First;
    while (i < position - 2)
    {
        point = point->link;
        i++;
    }
    ptr->link = point->link;
    point->link = ptr;
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
    cout << "Circular Linked List before Insertion:\n";
    display(); // Function to display the data of the nodes.

    //Calling Functions for various Insertion operations

    cout << "\nCircular Linked List after Insertion at Beginning:\n";
    Insert_At_Beginning(13);

    cout << "\nCircular Linked List after Insertion at End:\n";
    Insert_At_End(20);

    cout << "\nCircular Linked List after Insertion at Certain Position:\n";
    Insert_at_certain_position(4,23);
    return 0;
}