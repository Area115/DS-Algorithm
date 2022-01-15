#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        cout << " Element  = " << ptr->data << endl;
        ptr = ptr->next;
    }
}

int main()
{

    struct node *head;
    struct node *second;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));

    head->data = 45;
    head->next = second;

    second->data = 50;
    second->next = NULL;
    traversal(head);

    return 0;
}