//WAP to create a Linked List with five elements and display it.

#include <iostream>
#include <malloc.h>
using namespace std;
struct node
{
    int info;
    struct node *link;
} *First = NULL;
int main()
{
    node *n1, *n2, *n3, *n4, *n5;
    n1 = (node *)malloc(sizeof(node));
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