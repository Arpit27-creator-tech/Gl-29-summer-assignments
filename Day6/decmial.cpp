//Programme to convert decimal number to binary

#include<iostream>
#include<cmath>
using namespace std;

void decToBin(int n)
{
    if(n==0)
    {
        cout<<"0";
        return;
    }
    int bin=0;
    int count=0;
    while(n!=0)
    {
        
        int dig=n%2;
        bin=bin+(dig*pow(10,count));
        count++;
        n/=2;

    }
    cout<<bin;
}

int main()
{
    int n;
    cout<<"Enter the number you want to convert: ";
    cin>>n;
    decToBin(n);
    return 0;
}
