#include<iostream>

using namespace std;

void arm_range(int n)
{
    for(int i=1;i<=n;i++)
    {
        int temp=i;
        int m=i;
        int dig=0;
        int arm=0;
        while(m!=0)
        {
            dig++;
            m/=10;
        }
        while(temp!=0)
        {
            int num=temp%10;
            arm=arm+pow(num,dig);
            temp/=10;
        }
        if(arm==i)
        {
            cout<<i<<" ";
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the number till you want to find armstrong numbers: ";
    cin>>n;
    arm_range(n);
    return 0;
}