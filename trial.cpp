#include <stdio.h>

struct myArray
{

    int total_size;
    int used_size;
    int *ptr;   
};

void createArray(struct myArray *a, int tsize, int usize)
{
    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int *)malloc(tsize * sizeof(int));
};

void setval(struct myArray *a)
{

    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter element %d ", i + 1);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}

void show(struct myArray *a)
{

    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d \n", (a->ptr)[i]);
    }
}

int main()
{
    struct myArray marks;
    // printf("Calling Creating Array %d" );

    createArray(&marks, 5, 2);
    // printf("Calling setval" ,"%d");
    setval(&marks);
    // printf(" Calling Show %d" , "%d");
    show(&marks);

    return 0;
}