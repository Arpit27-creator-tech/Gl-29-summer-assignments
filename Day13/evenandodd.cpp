//programme to count even and odd elements in an array
#include<iostream>

using namespace std;
void EvenAndOdd(int arr[],int size)
{
    int CountEven=0;
    int CountOdd=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            CountEven++;
        }
        else
        {
            CountOdd++;
        }
    }
    cout<<"The number of even elements in the array are "<<CountEven<<endl;
    cout<<"The number of odd elements in the array are "<<CountOdd;
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
    EvenAndOdd(arr,size);
    return 0;
}