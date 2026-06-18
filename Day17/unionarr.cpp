//programme to union of two arrays
#include <iostream>
using namespace std;

void unionArrays(int arr1[], int arr2[], int size1, int size2)
{
    int unionArr[200];
    int j=0;
    for(int i=0;i<size1;i++)
    {
        unionArr[j++]=arr1[i];
    }
    for(int i=0;i<size2;i++)
    {
        int k;
        for(k=0;k<j;k++)
        {
            if(arr2[i]==unionArr[k])
            {
                break;
            }
        }
        if(k==j)
        {
            unionArr[j++]=arr2[i];
        }
    }
    cout<<"Union of the two arrays: ";
    for(int i=0;i<j;i++)
    {
        cout<<unionArr[i]<<" ";
    }
}
int main()
{
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    unionArrays(arr1, arr2, size1, size2);
    return 0;
}