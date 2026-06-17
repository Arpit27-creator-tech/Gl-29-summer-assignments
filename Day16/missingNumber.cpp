//programme to find missing number in an array
#include <iostream>
using namespace std;

int missingNumber(int arr[], int size)
{
    int total=(size+1)*(size+2)/2;
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    return total-sum;
}

int main()
{
    int arr[] = {1, 2, 4, 5, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Missing number is: "<<missingNumber(arr, size)<<endl;
    return 0;
}