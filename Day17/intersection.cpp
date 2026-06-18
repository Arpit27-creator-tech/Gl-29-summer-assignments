//programme to find intersection of two arrays
#include <iostream>

using namespace std;

void intersectionArrays(int arr1[], int arr2[], int size1, int size2)
{
    int intersection[200];
    int j=0;
    for(int i=0;i<size1;i++)
    {
        for(int k=0;k<size2;k++)
        {
            if(arr1[i]==arr2[k])
            {
                intersection[j++]=arr1[i];
                break;
            }
        }
    }
    cout<<"Intersection of the two arrays: ";
    for(int i=0;i<j;i++)
    {
        cout<<intersection[i]<<" ";
    }
}
int main()
{
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    intersectionArrays(arr1, arr2, size1, size2);
    return 0;
}