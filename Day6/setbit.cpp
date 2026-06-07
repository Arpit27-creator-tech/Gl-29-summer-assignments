//programme to calculate setbit of a decimal number


#include<iostream>

using namespace std;

void SetBit(int n)
{
    int count=0;
    while(n!=0)
    {
        int dig=n%2;
        if(dig==1)
        {
            count++;
        }
        n/=2;

    }
    cout<<"The number of set bit of the given number is "<< count;
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    SetBit(n);
    return 0;
}