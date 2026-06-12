//programme to find factorial of a given number

#include<iostream>
using namespace std;

void factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<fact;
}


int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    factorial(n);
    return 0;
}