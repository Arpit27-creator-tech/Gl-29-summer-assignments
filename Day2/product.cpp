#include<iostream>
using namespace std;

void prod_dig(int n)
{
    int product=1;
    while(n!=0)
    {
        int dig=n%10;
        product=product*dig;
        n/=10;
    }
    cout << "product of dig of number is "<< product;
}

int main()
{
    int n;
    cout<<"Enter any number: ";
    cin >> n;
    prod_dig(n);
    return 0;
}