//WAP to create a Linked List with five elements and display it.

#include <iostream>
#include <malloc.h>
using namespace std;
struct node
{
    int info;
    struct node *link;
} *First = NULL,*Last = NULL;

node *init(int n){                  //initializing the node and linking as well
    node *newNode=(node *)malloc(sizeof(node));
    newNode->info = n;
    newNode->link = NULL;
    if (First==NULL)
    {
        First = newNode;
        Last = newNode;
    }
    else
    {
        Last->link=newNode;
        Last = newNode;
    }
    return newNode;
}

int main()
{
    node *n1, *n2, *n3, *n4, *n5;
    
    n1 = init(10);
    n2 = init(20);
    n3 = init(30);
    n4 = init(40);
    n5 = init(50);
    
    node *temp;
    temp = First;
    cout << "Singly Linked List:\n";
    while (temp != NULL)
    {
        if (temp != n5)
            cout << temp->info << "-->";
        else
            cout << temp->info;

        temp = temp->link;
    }

    return 0;
}
