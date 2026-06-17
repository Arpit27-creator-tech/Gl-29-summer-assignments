//programm to find pair with given sum in an array
#include <iostream>
using namespace std;
void pairWithSum(int arr[], int size, int sum)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                cout<<"Pair with sum "<<sum<<" is: "<<arr[i]<<" and "<<arr[j]<<endl;
                return;
            }
        }
    }
    cout<<"No pair with sum "<<sum<<" found in the array."<<endl;
}
int main()
{    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum;
    cout<<"Enter the sum to find pairs: ";
    cin>>sum;
    pairWithSum(arr, size, sum);
    return 0;
}