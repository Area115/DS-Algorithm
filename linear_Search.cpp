#include <iostream>
using namespace std;

int searchelement(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(int);
    int element ;
    int result;
    cout<<"Elemnt element which you have to search = ";
    cin>>element;

    result = searchelement(arr, size, element);
    if (result == -1)
    {
        cout<<"No element is Found!!!!!!!!!"<<endl;
    }
    else{
        cout<<"Element "<<element<<" is found at index no. "<<result<<endl;
    }

    return 0;
}