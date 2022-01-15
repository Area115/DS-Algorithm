#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int element)
{

    int low, mid, high;
    low = 0;
    high = size - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    cout << "Hello World" << endl;
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(int);
    int element = 6;
    int result = BinarySearch(arr, size, element);
    if (result == -1)
    {
        cout << "Element is no Found " << endl;
    }        
    else
    {
        cout << "Element is found at index No. : "<<result << endl;
    }

    return 0;
}