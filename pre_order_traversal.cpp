#include <iostream>
#include <malloc.h>
using namespace std;

struct node
{
    int data;
    struct node *lptr;
    struct node *rptr;
};

//  Tree Looks Like
//     4
//    / \
    //   1   6
//  /\ 
    // 5 2
// int traversal(struct node *ptr)
// {
//     cout<<"Runs"<<endl;
//     struct node *flag = ptr;
//     // cout << ptr->data << endl;
//     while (ptr->lptr != NULL)
//     {
//         ptr = ptr->lptr;
//         cout << "True" << endl;
//     }
//     return ptr->data;
// }

void preorder(struct node *root)
{
    // cout << "Counter" << endl;
    // cout << "Root" << root << endl;
    if (root != NULL)
    {
        cout << root->data;
        preorder(root->lptr);
        preorder(root->rptr);
    }
}

void postorder(struct node *ptr)
{
    // cout<<" Call for "<<ptr->data<<endl;
    if (ptr != NULL)
    {
        // cout<<"If Loop"<<endl;
        postorder(ptr->lptr);
        postorder(ptr->rptr);
        cout << ptr->data;
        // cout<<" Ends"<<endl;
    }
}
struct node *createnode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->lptr = NULL;
    n->rptr = NULL;
    return n;
}

void inorder (struct node * ptr){

    if(ptr!= NULL){
        inorder(ptr->lptr);
        cout<<ptr->data<<endl;
        inorder(ptr->rptr);
    }
}

int main()
{
    int result;

    struct node *p = createnode(4);
    struct node *p1 = createnode(1);
    struct node *p2 = createnode(6);
    struct node *p4 = createnode(5);
    struct node *p5 = createnode(2);

    // cout << "Result : " << result << endl;
    p->lptr = p1;
    p->rptr = p2;
    p1->lptr = p4;
    p1->rptr = p5;
    cout<<" PreOrder = "<<endl;
    preorder(p);
    cout<<endl;
    cout<<" PostOrder = "<<endl;
    postorder(p);
    cout<<" Inorder = "<<endl;
    inorder(p);
    return 0;
}