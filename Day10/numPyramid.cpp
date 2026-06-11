/*
    1
   121
  12321
 1234321
123454321

*/

#include<iostream>

using namespace std;

void pattern11(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            if(j<=i)
            {
                cout<<j;
            }
            else
            {
                int print=2*i-j;
                cout<<print;
            }
        }
        for(int j=1;j<=n-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    pattern11(n);
    return 0;
}