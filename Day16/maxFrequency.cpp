//programme to fnd the maximum frequency of an element in an array
#include <iostream>
using namespace std;
int maxFrequency(int arr[], int size)
{
    int max_freq=0;
    for(int i=0;i<size;i++)
    {
        int freq=1;
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                freq++;
            }
        }
        if(freq>max_freq)
        {
            max_freq=freq;
        }
    }
    return max_freq;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 2, 3, 1, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Maximum frequency of an element in the array is: "<<maxFrequency(arr, size)<<endl;
    return 0;
}