//programme to find largest and smallest element in array

#include<iostream>

using namespace std;

void LargestAndSmallest(int arr[],int size)
{
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"The largest element in the array is: "<<max<<endl;
    cout<<"The smallest element in the array is: "<<min<<endl;
}

int main()
{
    int size,arr[100];
    cout<<"Enter the number of elements in array: ";
    cin>>size;
    cout<<"Enter the elements in array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    LargestAndSmallest(arr,size);
    return 0;
}