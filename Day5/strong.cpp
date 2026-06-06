//Programmm to find strong number
#include<iostream>
using namespace std;

void strong(int n)
{
    int temp=n;
    int num;
    int sum=0;
    while(n!=0)
    {
        int fact=1;
        num=n%10;
        for(int i=1;i<=num;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        n/=10;
    }
    if(sum==temp)
    {
        cout<<"It is a strong number";
    }
    else{
        cout<<"Not a strong number ";
    }
}

int main()
{
    int n;
    cout<<"Enter a number you want to check: ";
    cin>>n;
    strong(n);
    return 0;
}