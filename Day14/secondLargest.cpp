//programme to find second largest element in the array

#include<iostream>

using namespace std;

void SecondLargest(int arr[],int size)
{
    int max=INT_MIN;
    int slarge;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            slarge=max;
            max=arr[i];
        }
    }
    cout<<"The second largest element is "<< slarge;
}

int main()
{
    int size,arr[100];
    cout<<"Enter the number of elements in the array: ";
    cin >>size;

    cout<<"Enter the elements in the array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    SecondLargest(arr,size);
    return 0;
}