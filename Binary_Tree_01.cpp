#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createnode(int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

int main()
{
    /*
    // Constructing Root Node
        struct node *root;
        root = (struct node*)malloc(sizeof(struct node));
        root->data = 7;
        root->left = p1;
        root->right = p2;
    // Constructing first node
        struct node *p1;
        p1 = (struct node*)malloc(sizeof(struct node));
        p1->data = 8;
        p1->left = NULL;
        p1->right = NULL;
    //  Constructing Second Node
        struct node *p2;
        p2 = (struct node*)malloc(sizeof(struct node));
        p2->data = 9;
        p2->left = NULL;
        p2->right = NULL;

    */
    struct node *p = (createnode(1));
    struct node *p1 = (createnode(2));
    struct node *p2 = (createnode(3));
    p->left = p1;
    p->right = p2;
    

    return 0;
}