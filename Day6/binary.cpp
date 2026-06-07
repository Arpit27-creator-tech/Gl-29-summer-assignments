//Programme to convert binary number to decimal


#include<iostream>
#include<cmath>
using namespace std;

void BinToDec(int n)
{
    int dec=0;
    int count=0;
    while(n>0)
    {
        int dig=n%10;
        dec=dec+dig*pow(2,count);
        count++;
        n/=10;
    }
    cout<<dec;
}

int main()
{
    int n;
    cout<<"enter n: ";
    cin>> n;
    BinToDec(n);
    return 0;
}