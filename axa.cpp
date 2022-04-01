#include<iostream>
using namespace std ;

struct node{
    int data;
    struct node *next;
};

void traversal (struct node * ptr){
    while(ptr!=NULL){
        cout<<"Data = "<<ptr->data<<endl;
        ptr = ptr->next;
    }
}
int main(){

    struct node *head ;
    struct node *second ;
    struct node *third;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof (struct node));
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = NULL;
    traversal(head);

    
   return 0 ; 
}