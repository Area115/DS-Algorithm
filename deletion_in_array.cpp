#include <iostream>
using namespace std;

void dltelement(int arr[], int usize, int index)
{
    for (int i = index; i < usize - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

void show_arry(int arr[], int usize)    
{
    for (int i = 0; i < usize; i++)

    {

        cout << arr[i];

        cout << ", ";
    }
    cout << endl;
}

int main()
{
    int arr[10] = {1, 2, 45, 3, 4, 5};
    int usize = 6, index = 2;
    cout << "Before Deletion : ";
    show_arry(arr, usize);
    dltelement(arr, usize, index);
    usize -= 1;
    cout << "After Deletion : ";
    show_arry(arr, usize);

    return 0;
}