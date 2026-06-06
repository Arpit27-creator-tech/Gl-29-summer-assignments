//Prpgramme to find perfect number
#include<iostream>
using namespace std;

void PerfectNum(int n)
{
    int div=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            div=div+i;
        }
    }
    if(div==n)
    {
        cout<<"It is a perfect number: ";
    }
    else{
        cout<<"It is not a perfect number: ";
    }
}

int main()
{
    int n;
    cout<<"Enter the number you want to check: ";
    cin>>n;
    PerfectNum(n);
    return 0;
}