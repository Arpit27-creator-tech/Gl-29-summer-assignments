//programme to find factors of a number
#include<iostream>

using namespace std;

void factors(int n)
{
    for(int i=0;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    factors(n);
}