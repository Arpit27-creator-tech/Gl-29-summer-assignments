//programm to calculate sum of dig using recursion

#include<iostream>

using namespace std;

int Sum_Of_Dig(int n)
{
    if(n==0)
    {
        return 0;
    }
    return (n%10)+Sum_Of_Dig(n/10);
    
}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>> n;
    cout<<Sum_Of_Dig(n);
}