#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

void TraversalInforward(struct Node *head)
{
    struct Node *p = head;
    do
    {
        cout << "Element : " << p->data << endl;
        p = p->next;
    } while (p->next != NULL);
        cout << "Element : " << p->data << endl;
        cout<<" ---------------"<<endl;
    
}

void TraversalInbackward(struct Node *forth)
{
    struct Node *p = forth;
    do
    {
        // cout<<"Do Runs"<<endl;
        cout << "Element : " << p->data << endl;
        p = p->prev;
    } while (p->prev != NULL);
        cout << "Element : " << p->data << endl;
        cout<<" ---------------"<<endl;
    
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
    head->prev = NULL;
    head->next = second;

    second->data = 2;
    second->prev = head;
    second->next = third;

    third->data = 3;
    third->prev = second;
    third->next = forth;

    forth->data = 4;
    forth->prev = third;
    forth->next = NULL;
    // cout<<head->data;

    TraversalInforward(head);
    TraversalInbackward(forth);
    cout<<"Code Terminates";
    


    return 0;
}