//programme to reverse a number using recursion

#include<iostream>

using namespace std;

int reverse(int n,int rev=0)
{
    if(n==0)
    {
        return rev;
    }
    return reverse(n/10,rev*10+(n%10));
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int rev=reverse(n);
    cout<<rev;
    return 0;
}