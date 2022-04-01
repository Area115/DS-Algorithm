#include<iostream>
using namespace std ;
int top = -1 ;



struct stack{
    int size;
    int top ;
    int *arr;
    
};

int isEmpty(struct stack *ptr){
    if(ptr->top == -1){
        
        return 1;
    }
    else{
        
        return 0;
    }
}

int isFull(struct stack *ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    else{
        
        return 0;
    }
}



int main(){
   struct stack *s;
   s->size = 6;
   s->top = -1;
   s->arr = (int *)malloc(s->size*sizeof(int));
//    if(isEmpty(s) == 1){
//        cout<<"Array is Empty"<<endl;
//    }
//    else{
//        cout<<" Array is not Empty"<<endl;
//    }
    int k = isEmpty(s) ;
    cout<<" CCNUIH"<<k;


   return 0 ; 
}