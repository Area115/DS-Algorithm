#include <stdio.h>

void display(int arr[], int usize)
{
    for (int i = 0; i < usize; i++)
    {
        printf(" %d\n", arr[i]);
    }
    printf("\n");
}

int insertion(int arr[], int element, int usize)
{

    if (element > arr[usize - 1])
    {
        arr[usize] = element;
        return -1;
    }
    for (int i = usize - 1; i >= 0; i++)
    {
        if (arr[i] > element && arr[i - 1] < element)
        {

            arr[i + 1] = arr[i];
            arr[i] = element;
            return 1;
        }
    }
}

int main()
{
    int arr[7] = {1, 3, 5, 8}, size = 20, element = 4, usize = 4;
    display(arr, usize);

    insertion(arr, element, usize);
    usize += 1;
    display(arr, usize);

    return 0;
}