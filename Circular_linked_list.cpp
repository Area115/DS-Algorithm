#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void traversal(struct Node *head)
{
    struct Node *p = head;
    do
    {
        cout << " Element " << p->data << endl;
        p = p->next;
    } while (p->next != head);
    cout << " Element " << p->data << endl;

    cout << " --------------------" << endl;
}

struct Node *insertElement(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;

    do
    {
        // cout<<" Element "<<p->data<<endl;
        p = p->next;
    } while (p->next != head);
    p->next = ptr;
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;
    struct Node *fifth;
    struct Node *sixth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));
    sixth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = forth;

    forth->data = 4;
    forth->next = fifth;

    fifth->data = 5;
    fifth->next = sixth;

    sixth->data = 6;
    sixth->next = head;
    cout << "Traversal Before insertion" << endl;
    traversal(head);
    head = insertElement(head, 90);
    traversal(head);
    cout<<"Traversal After insertion"<<endl;

    return 0;
}