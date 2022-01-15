#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void TraversalInLinkedlists(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << " Element = " << ptr->data << endl;
        ptr = ptr->next;
    }
    cout << "***********" << endl;
}

struct Node *insertatbegin(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    TraversalInLinkedlists(head);
    head = insertatbegin(head, 45);
    TraversalInLinkedlists(head);

    return 0;
}