#include<iostream>

using namespace std;

void fibonnaci(int n)

{
    int a=0,b=1;
    if(n==0)
    {
        cout<<" Enter a valid number";
    }
    else{
    for(int i=1;i<=n;i++)
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
    cout<<"Enter the number of terms in the fibonacci series: ";
    cin>> n;
    fibonnaci(n);
    return 0;
}