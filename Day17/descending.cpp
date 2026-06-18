//programme to sort an array in descending order
#include <iostream>

using namespace std;
void sortDescending(int arr[], int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
    cout<<"Array in descending order: ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    sortDescending(arr, size);
    return 0;
}