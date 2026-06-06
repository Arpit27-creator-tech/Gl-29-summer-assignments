//programme to find largest prime factor of a number
#include<iostream>

using namespace std;

void prime_factor(int n)
{
    if(n<=1)
    {
        cout<<"No prime factors";
        return;
    }
    int fact;
    for(int i=1;i<=n;i++)
    {
        
        int count=0;
        if(n%i==0)
        {
            for(int j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    count++;
                }
            }
            if(count==2)
            {
                fact=i;
            }
        }
    }
    cout<<fact;
    
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    prime_factor(n);
    return 0;
}