#include<iostream>
using namespace std;

void armstrong(int n)
{
    int temp=n,armstg=0,m=n;
    int dig=0;
    while(m!=0)
    {
        dig++;
        m/=10;
    }
    while(n!=0)
    {
        double num=n%10;
        armstg=armstg+pow(num,dig);
        n/=10;
    }
    if(armstg==temp)
    {
        cout<<" it is an armstrong number: ";
    }
    else
    {
        cout<< "Not an armstrong number: ";
    }

}

int main()
{
    int n;
    cout<<"Enter the number you want to check: ";
    cin>> n;
    armstrong(n);
    return 0;
}