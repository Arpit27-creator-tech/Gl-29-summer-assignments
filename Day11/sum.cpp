//programme to write a function to calculate the sum of two numbers

#include<iostream>

using namespace std;

void sum(int n,int m)
{
    int add=n+m;
    cout << add;
}

int main()
{
    int n,m;
    cout<<"Enter the first number: ";
    cin>>n;
    cout<<"Enter the second number: ";
    cin>>m;
    sum(n,m);
    return 0;
}