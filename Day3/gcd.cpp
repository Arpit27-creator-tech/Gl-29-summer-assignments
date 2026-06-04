#include<iostream>
using namespace std;

void Gcd(int n1,int n2)
{
    int gcd=1;
    for(int i=1;i<=min(n1,n2);i++)
    {
        if(n1%i==0&& n2%i==0)
        {
            gcd=i;
        }
    }
    cout << "The GCD of "<<n1<<" and "<<n2<<" is "<< gcd;
}

int main()
{
    int n1,n2;
    cout<<"Enter 1st number: ";
    cin>>n1;
    cout<<"Enter 2ns number: ";
    cin>>n2;
    Gcd(n1,n2);
    return 0;
}