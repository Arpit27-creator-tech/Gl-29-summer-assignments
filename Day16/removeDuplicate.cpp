//programme to remove duplicate elements from an array
#include <iostream>
using namespace std;
void removeDuplicate(int arr[], int size)
{
    int temp[100];
    int j=0;
    for(int i=0;i<size;i++)
    {
        int k;
        for(k=0;k<j;k++)
        {
            if(arr[i]==temp[k])
            {
                break;
            }
        }
        if(k==j)
        {
            temp[j++]=arr[i];
        }
    }
    cout<<"Array after removing duplicates: ";
    for(int i=0;i<j;i++)
    {
        cout<<temp[i]<<" ";
    }
}
int main()
{    int arr[] = {1, 2, 3, 4, 2, 3, 1, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    removeDuplicate(arr, size);
    return 0;
}