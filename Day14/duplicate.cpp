//programme to find duplicate element in the array

#include<iostream>

using namespace std;

void duplicate(int arr[],int size)
{
    bool find=false;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                find=true;
                cout<<arr[i]<<" is a duplicate element"<<endl;;
            }
        }
    }
    if(find==false)
    {
        cout<<"No duplicate element";
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
    duplicate(arr,size);
    return 0;
}