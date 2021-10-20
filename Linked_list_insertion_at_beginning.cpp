//WAP to insert an element in the existing linkedlist at the beginning.

#include <iostream>        //Aman Khade
#include <malloc.h>
using namespace std;
struct node
{
    int info;
    struct node *link;
} *First = NULL;
int main()
{
    node *n1, *n2, *n3, *n4, *n5;      //Creating nodes of linked list
    n1 = (node *)malloc(sizeof(node)); //dynamic memory allocation using malloc
    n1->info = 10;
    n1->link = NULL;
    First = n1;

    n2 = (node *)malloc(sizeof(node));
    n2->info = 20;
    n2->link = NULL;
    n1->link = n2;

    n3 = (node *)malloc(sizeof(node));
    n3->info = 30;
    n3->link = NULL;
    n2->link = n3;

    n4 = (node *)malloc(sizeof(node));
    n4->info = 40;
    n4->link = NULL;
    n3->link = n4;

    n5 = (node *)malloc(sizeof(node));
    n5->info = 50;
    n5->link = NULL;
    n4->link = n5;

    node *temp;                //temporary pointer used for printing the elements
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

    //Insertion at the beginning

    node *n0;                   //node to be inserted
    n0 = (node *)malloc(sizeof(node));
    n0->info = 5;
    n0->link = First;
    First = n0;
    temp = First;
    cout << "\nSingly Linked List after insertion on first position:\n";
    while (temp != NULL)
    {
        if (temp != n5)
            cout << temp->info << "-->";
        else
            cout << temp->info;

        temp = temp->link;
    }

    return 0;           //Aman Khade
}