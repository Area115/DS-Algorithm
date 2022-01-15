#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
// Deleting First Element
void TraversalInLinkedlists(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << " Element = " << ptr->data << endl;
        ptr = ptr->next;
    }
    cout << " ---------------------------------" << endl;
}

struct Node *deleteFirstElement(struct Node *head)
{
    struct Node *p = head;
    head = head->next;
    free(p);
    return head;
}

struct Node *deleteElementAtIndex(struct Node *head, int index)
{

    struct Node *p = head;
    struct Node *q = p->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

struct Node * deletionAtEnd(struct Node*head){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q!=NULL){
        p =p->next;
        q = q->next;

    }
    p->next = NULL;
    free(q);

}


int main()
{
    cout << "  code Starts" << endl;
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
    forth->next=NULL;

    // TraversalInLinkedlists(head);
    // head = deleteFirstElement(head); // For deleting first element
    // TraversalInLinkedlists(head);

    head = deleteElementAtIndex(head, 2);
    TraversalInLinkedlists(head);
    cout << "  !code Terinates!  " << endl;
    deletionAtEnd(head);


    return 0;
}