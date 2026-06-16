//programme to move all zeroes to the end of the array
#include <iostream>

using namespace std;

void moveZeroesToEnd(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            arr[count++] = arr[i];
        }
    }
    while (count < size)
    {
        arr[count++] = 0;
    }
}

int main()
{
    int size, arr[100];
    cout << "Enter the number of elements in the array: ";
    cin >> size;
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    moveZeroesToEnd(arr, size);
    cout << "Array after moving zeroes to the end: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}