//programme to reverse an array
#include <iostream>

using namespace std;

void reverse(int arr[], int size)
{
    for(int i=size-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int size,arr[100];
    cout<<"Enter the number of elements in the array: ";
    cin>>size;
    cout<<"Enter the elements in the array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    reverse(arr,size);
    return 0;
}