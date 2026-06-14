//programme to find sum and average of array

#include<iostream>
using namespace std;

void SumAndAverage(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    float avg=sum/size;
    cout<<"Sum of all elements of array is "<< sum<<endl;
    cout<<"Average of all elements of array is "<<avg;
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
    SumAndAverage(arr,size);
    return 0;
}