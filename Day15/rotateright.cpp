//programme to rotate an array right by d positions
#include <iostream>

using namespace std;

void rotateRight(int arr[], int size, int d)
{
    int temp[100];
    for(int i=0;i<size;i++)
    {
        temp[(i+d)%size]=arr[i];
    }
    for(int i=0;i<size;i++)
    {
        cout<<temp[i]<<" ";
    }
}

int main()
{
    int size,arr[100],d;
    cout<<"Enter the number of elements in the array: ";
    cin>>size;
    cout<<"Enter the elements in the array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number of positions to rotate right: ";
    cin>>d;
    rotateRight(arr,size,d);
    return 0;
}