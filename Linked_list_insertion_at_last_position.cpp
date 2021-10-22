//WAP to insert an element in the existing linkedlist at the beginning.

#include <iostream>        //Aman Khade
#include <malloc.h>
using namespace std;
struct node
{
    int info;
    struct node *link;
} *First = NULL,*Last = NULL;

node *init(int n){
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
    node *n1, *n2, *n3, *n4, *n5;      //Creating nodes of linked list
    
    n1 = init(10);
    n2 = init(20);
    n3 = init(30);
    n4 = init(40);
    n5 = init(50);

    node *temp;                    //temporary pointer used for printing the elements
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

    //Insertion at the last position

    node *n6;                   //node to be inserted
    n6 = (node *)malloc(sizeof(node));
    
    n6->info = 60;
    n6->link = NULL;
    n5->link = n6;
    temp = First;
    cout << "\nSingly Linked List after insertion on last position:\n";
    while (temp != NULL)
    {
        if (temp != n6)
            cout << temp->info << "-->";
        else
            cout << temp->info;

        temp = temp->link;
    }

    return 0;           //Aman Khade
}
