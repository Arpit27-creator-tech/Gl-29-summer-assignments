//programme to input and display array
#include<iostream>

using namespace std;

void printArray(int arr[],int size)
{
    cout<<"Elemets in the array are: ";
    for(int i=0;i<size;i++)
    {
        cout<< arr[i]<<" ";
    }
}

int main()
{
    int arr[100];
    int size;
    cout<<"Enter the number of elements in the array: ";
    cin>>size;
    cout<<"Enter the elements in array: \n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    printArray(arr,size);
    return 0;
}