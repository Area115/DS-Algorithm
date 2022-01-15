#include <iostream>
#include<stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void linkedlisttraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << " Element = " << ptr->data << endl;
        ptr = ptr->next;
    }
    cout << "--------------------------" << endl;
}

struct Node *InsertAtNode(struct Node *node, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    // struct Node *node = node;
    ptr->data = data;
    ptr->next = node->next;
    node->next = ptr;
    return node;
}

int main()
{
    cout<<"Sdww"<<endl;
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
    third->next = forth;

    forth->data = 4;
    forth->next = NULL;
    linkedlisttraversal(head);
    InsertAtNode(third, 50);
    linkedlisttraversal(head);

    return 0;
}