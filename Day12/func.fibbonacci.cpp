//func to print fibonacci

#include<iostream>

using namespace std;

void fibonacci(int n)
{
    int a=0,b=1;
    if(n==0)
    {
        cout<<"Enter a positive number";
    }
    else{
        for(int i=0;i<n;i++)
        {
            cout<<a<<" ";
            int next=a+b;
            a=b;
            b=next;
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the number of terms you want in the series ";
    cin>>n;
    fibonacci(n);
    return 0;
}