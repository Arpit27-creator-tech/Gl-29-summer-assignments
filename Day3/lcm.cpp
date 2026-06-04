#include<iostream>

using namespace std;

void LCM(int n1,int n2)
{
    int lcm=1;
    for(int i=1;i!=0;i++)
    {
        if(i%n1==0&&i%n2==0)
        {
            lcm=i;
            break;
        }

    }
    cout<< lcm<<" is the lcm.";
}

int main()
{
    int n1,n2;
    cout<<"Enter 1st number: ";
    cin>>n1;
    cout<<"Enter 2nd number: ";
    cin>>n2;
    LCM(n1,n2);
    return 0;
}