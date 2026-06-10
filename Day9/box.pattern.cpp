/*
*****
*   *
*   *
*   *
*****   
*/

#include<iostream>

using namespace std;

void pattern8(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1||i==5||j==1||j==5)
            {
                cout <<" * ";
            }
            else
            {
                cout<<"   ";
            }
        }
        cout <<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    pattern8(n);
    return 0;
}