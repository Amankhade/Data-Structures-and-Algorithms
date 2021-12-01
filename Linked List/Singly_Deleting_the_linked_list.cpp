#include <iostream>
#include <malloc.h>
using namespace std;

struct node
{
    int data;
    struct node *link;
} *First = NULL, *Last = NULL;
void init(int data)
{
    node *newNode;
    newNode = new node;
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
    }
}
void del_linked_list(node *ptr)
{

    ptr = First;
    while (ptr != NULL)
    {
        First = First->link;
        free(ptr);
        ptr = First;
    }
    if (ptr == NULL)
    {
        cout << "Linked list deleted Successfully";
    }
}
void display(node *ptr)
{
    ptr = First;
    while (ptr != NULL)
    {
        cout << ptr->data << "-->";
        ptr = ptr->link;
    }
    cout << endl;
}
int main()
{

    init(54);
    init(47);
    init(59);
    init(23);
    init(85);
    init(78);
    display(First);
    del_linked_list(First);

    return 0;
}