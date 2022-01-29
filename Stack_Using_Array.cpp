#include<iostream>
using namespace std ;
int top = -1 ;



// struct stack{
//     int size;
//     int top ;
//     int *arr;
    
// };

void push(int element , int arr[]){
    top = top +1 ;
    arr[top] = element;
}

void pop(int element , int arr[]){
    top = top +1 ;
    arr[top] = element;
}



int main(){
    int arr[5] = {1,2,3};
    cout<<arr[2]<<endl;
    arr[3] = 445;
    cout<<arr[3];
   

    
   return 0 ; 
}