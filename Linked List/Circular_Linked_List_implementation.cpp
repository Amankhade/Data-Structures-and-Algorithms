#include <iostream>
#include <malloc.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
} *First = NULL, *Last = NULL;

void display()
{
    node *ptr = First;
    do
    {
        cout << ptr->data << "-->";
        ptr = ptr->link;
    } while (ptr!= First);
    
    cout << endl;
}
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
int main()
{
    init(5);
    init(10);
    init(3);
    init(7);
    init(6);
    init(4);
    cout << "Circular Linked List:\n";
    display();

    return 0;
}