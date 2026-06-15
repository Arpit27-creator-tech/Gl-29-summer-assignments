//programme toi find the frequency of an element
#include<iostream>
using namespace std;

void frequency(int arr[],int size,int key)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        
        if(key==arr[i])
        {
            count++;
        }

    }
    cout<<"The frequency of "<< key << " is "<<count;
}

int main()
{
    int size,arr[100],key;
    cout<<"Enter the number of elements in the array: ";
    cin>>size;
    cout<<"Enter the elements in the array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element for which you want to find the frequency: ";
    cin>>key;
    frequency(arr,size,key);
    return 0;
}