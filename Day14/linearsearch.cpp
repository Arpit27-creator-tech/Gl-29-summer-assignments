//programme to searnch an element in an array using linear search

#include<iostream>

using namespace std;

void LinearSearch(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(key==arr[i])
        {
            cout<<key<<" is in the array ";
            return;
        }
    }
    cout<<key<<" is not in the array ";
}

int main()
{
    int size,arr[100];
    cout<<"Enter the number of elements in the array: ";
    cin >> size;
    cout<<"Enter the element in the arrray: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the elements you want to search: ";
    cin>>key;
    LinearSearch(arr,size,key);
    return 0;
}