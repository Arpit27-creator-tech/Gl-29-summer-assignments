#include<iostream>

using namespace std;

void prime(int n)
{
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cnt++;
        }
    }
    if(cnt==2)
    {
        cout <<"prime";
    }
    else{
        cout<<"not a prime: ";
    }
}

int main()
{
    int n;
    cout<<"Enter the numebr you want to check: ";
    cin>>n;
    prime(n);
    return 0;
}