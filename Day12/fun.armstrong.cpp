//function to check for armstrong number

#include<iostream>
#include<math.h>

using namespace std;

void armstrong(int n)
{
    int temp=n;
    int m=n;
    int armstg=0;
    int count=0;
    while(temp!=0)
    {
        count++;
        temp/=10;
    }
    while(n!=0)
    {
        int dig=n%10;
        armstg=armstg+pow(dig,count);
        n/=10;
    }
    if(armstg==m)
    {
        cout<<"Armstrong";
    }
    else
    {
        cout<<"Not Armstrong";
    }

}

int main()
{
    int n;
    cout<<"Enter the number you want to check: ";
    cin>>n;
    armstrong(n);
    return 0;
}