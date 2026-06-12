//programme to write a funtion to check a number is prime or not

#include<iostream>

using namespace std;

void isPrime(int n)
{
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count ++;
        }
    }
    if(count==2)
    {
        cout<<n<<" is pime";
    }
    else
    {
        cout<<n<<" is not prime";
    }
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    isPrime(n);
    return 0;
}
