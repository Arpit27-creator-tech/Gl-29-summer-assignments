//programme to calculate foactorial of number using necursion

#include<iostream>

using namespace std;

int fact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin >> n;
    if(n<0)
    {
        cout <<"Enter positive number: ";
    }
    else
    {
        cout<<fact(n);
    }
    return 0;
}