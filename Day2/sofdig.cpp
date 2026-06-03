#include<iostream>
using namespace std;

void sum_of_dig(int n)
{
    int sum=0;
    while(n!=0)
    {
        int dig=n%10;
        sum=sum+dig;
        n=n/10;
    }
    cout<<"Sum of digits is: "<< sum;
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin >> n;
    sum_of_dig(n);
    return 0;

}