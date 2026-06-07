//programme to calculate n^m without using pow function

#include<iostream>

using namespace std;

void power(int n,int m)
{
    int ans=1;
    for(int i=1;i<=m;i++)
    {
        ans=ans*n;
    }
    cout<<ans;
}

int main()
{
    int n,m;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the power to which number is raised: ";
    cin>>m;
    power(n,m);
    return 0;
}